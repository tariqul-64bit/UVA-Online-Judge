#include<bits/stdc++.h>
using namespace std;
int config[100][8];
int temp_config[8];
int counter=0;
int board[10][10];



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

freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);



    memset(config,0,sizeof(config));
    memset(temp_config,0,sizeof(temp_config));

    backtracker(0);


    int tc;
    cin>>tc;


while(tc--){


for(int i=0;i<8;i++)
    for(int j=0;j<8;j++) cin>>board[i][j];

int ans= -1000,temp_ans;



for(int i=0;i<92;i++)
{
    temp_ans=0;

    for(int j=0;j<8;j++)
    {
        int xx,yy;
        xx=j;yy=config[i][j];

        temp_ans+= board[xx][yy];

    }

    ans = max(ans,temp_ans);

}


printf("%5d\n",ans);

}

}
