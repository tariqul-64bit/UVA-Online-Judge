#include<bits/stdc++.h>
using namespace std;
#define EPS 1e-9
int arr[60];
int answer = 0;
int peg;

bool isquare(long long unsigned a)
{
    long long c = sqrt(a);
    float d = sqrt(a);
    if(abs(d*d - c*c )< EPS ) return true;
    else return false;
}

void BackTrack(int number,int maxpeg)
{
    if( maxpeg == peg ) return ;
    if(arr[maxpeg] == 0 )
    {
        answer++;
        arr[maxpeg] = number;
        return BackTrack(number+1,maxpeg);
    }
    for(int i=0; i <= maxpeg; i++)
    {
        if( isquare( arr[i] + number ) )
        {
            arr[i] = number;
            answer++;
            return BackTrack(number+1,maxpeg);
        }
    }
    BackTrack(number,maxpeg+1);
}

int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
    int tc;
    cin>>tc;
    while(tc--)
    {
        answer = 0;
        cin>>peg;
        memset(arr,0,sizeof(arr));
        BackTrack(1,0);
        cout<<answer<<endl;
    }
}
