#include <stdio.h>
#include <algorithm>
using namespace std;
struct Pt {
    int x, y;
    bool operator<(const Pt &p) const {
        if(x != p.x)
            return x < p.x;
        return y < p.y;
    }
};
Pt A[100005], B[100005];
void rotate90(Pt A[], int n) {
    int i, j, k;
    int bx = A[0].x, by = A[0].y;
    int tx, ty;
    int cos90 = 0, sin90 = 1;
    for(i = 0; i < n; i++) {
        tx = bx + (A[i].x-bx)*cos90 - (A[i].y-by)*sin90;
        ty = by + (A[i].x-bx)*sin90 + (A[i].y-by)*cos90;
        A[i].x = tx, A[i].y = ty;
    }
}
int main() {
    int testcase, n;
    int i, j, k;
    scanf("%d", &testcase);
    while(testcase--) {
        scanf("%d", &n);
        for(i = 0; i < n; i++)
            scanf("%d %d", &A[i].x, &A[i].y);
        for(i = 0; i < n; i++)
            scanf("%d %d", &B[i].x, &B[i].y);
        int matched = 0;
        sort(B, B+n);
        for(i = 0; i < 4; i++) {
            rotate90(A, n);
            sort(A, A+n);
            int dx = A[0].x - B[0].x;
            int dy = A[0].y - B[0].y;
            for(j = 0; j < n; j++)
                if(A[j].x != B[j].x+dx || A[j].y != B[j].y+dy)
                    break;
            if(j == n)
                matched = 1, i = 4;
        }
        puts(matched ? "MATCHED" : "NOT MATCHED");
    }
    return 0;
}
