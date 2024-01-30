#include<bits/stdc++.h>
using namespace std;
int config[100][8];
int temp_config[8];
int counter=0;
int s[10];



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

    int tc=0;

    memset(config,0,sizeof(config));
    memset(temp_config,0,sizeof(temp_config));

    backtracker(0);




while(cin>>s[0]>>s[1]>>s[2]>>s[3]>>s[4]>>s[5]>>s[6]>>s[7]){

s[0]--;s[1]--;s[2]--;s[3]--;s[4]--;s[5]--;s[6]--;s[7]--;


int ans =10,temp_ans=0;

for(int i=0;i<92;i++)
{
    temp_ans=0;
    for(int j=0;j<8;j++)
    {
        if(config[i][j] != s[j] ) temp_ans++;

    }

    ans = min(ans,temp_ans);

}



cout<<"Case "<<++tc<<": ";
cout<<ans<<endl;

}

}
