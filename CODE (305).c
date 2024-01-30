#include <stdio.h>
#define MAX 25
#define SEEN 's'

int N,M,X,Y;
char g[MAX][MAX], land;
int v[MAX][MAX];
int ans;

int floodfill(int x, int y){
    int ret;
    if(y==M) y=0; else if(y==-1) y=M-1;
    if(x<0||x>=N||y<0||y>=M) return 0;
    if(v[x][y]) return 0;
    if(g[x][y] != land) return 0;

    v[x][y]=1;
    ret=1;
    ret+=floodfill(x,y-1);
    ret+=floodfill(x,y+1);
    ret+=floodfill(x+1,y);
    ret+=floodfill(x-1,y);
    return ret;
}

int main(){
    int i,j,t;
    while(scanf("%d %d", &N,&M)==2){
        /*newline*/
        getchar();
        for(i=0;i<N;i++){
            for(j=0;j<M;j++){
                g[i][j]=getchar();
                v[i][j]=0;
            }
            /*newline*/
            getchar();
        }
        scanf("%d %d",&X,&Y);
        /* It was not said that land would be 'l' */
        land = g[X][Y];
        /* sink king's country */
        floodfill(X,Y);
        ans = 0;
        for(i=0;i<N;i++){
            for(j=0;j<M;j++){
                if(g[i][j]==land){
                    t = floodfill(i,j);
                    if(t>ans) ans = t;
                }
            }
        }
        printf("%dn", ans);
    }
    return 0;
}
