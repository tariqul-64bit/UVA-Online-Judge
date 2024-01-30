#include<bits/stdc++.h>
using namespace std;
int config[100][8];
int temp_config[8];
int counter=0;

bool canplace(int x,int y)
{
    for(int i=0; i<y; i++)
        if( temp_config[i] == x || (abs(temp_config[i] - x) == abs(i-y)))
            return false;
    return true;
}
void backtracker(int c)
{
    if(c==8)
    {
        for(int i =0; i<8; i++) {config[counter][i] = temp_config[i];}
        counter++;
    }
    for(int rows =0; rows<8; rows++)
    {
        if(canplace(rows,c))
        {
            temp_config[c] = rows;
            backtracker(c+1);
        }
    }
}

int main()
{

    memset(config,-1,sizeof(config));
    memset(temp_config,0,sizeof(temp_config));

    backtracker(0);

int tc;
cin>>tc;
while(tc--){
//int rr,cc;
//cin>>rr>>cc;

//--rr,--cc;
printf("SOLN       COLUMN\n");
printf(" #      1 2 3 4 5 6 7 8\n\n");
int cnt=1;
for(int i = 0 ;i<92;i++)
{
    //if(config[i][cc] == rr )
        {
            if(cnt<10) cout<<" ";
            cout<<cnt<<"      ";
            cnt++;
        for(int j=0;j<8;j++) {cout<<config[i][j]+1; if(j!=7) cout<<" ";}
    cout<<endl;
    }
}

if(tc)cout<<endl;
}

}
