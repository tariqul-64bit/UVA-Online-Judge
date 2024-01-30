#include <bits/stdc++.h>
using namespace std;

int finalans= 0;
int ans= 0;
int maxbishop =4;
int x,y;
bool bitmask[10][10];



bool conflict(int x,int y)
{

    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
    {

        if(bitmask[i][j]  == 1  && (abs(x-i) == abs(y-j)) ) return true;

    }

return false;
}


void BackTrack(int x, int y , int bishop)
{



    if(bishop == maxbishop)  {

        ans++;
        finalans = max(ans, finalans);
        return;
    }
    if(x == 4 && y==4 ) return;
    if(y==4) { x+=1;y=0; }


//Here is an for loop to check the diagonal values
//for(x,y) we check the bitmask of the diagonal.



    bitmask[x][y] = true;
    BackTrack(x,y+1,bishop+1);

    bitmask[x][y] = false;
    BackTrack(x,y+1,bishop);



}




int main()
{
    x=0,y=0;
    ans =0;
    memset(bitmask,true,sizeof(bitmask));

    BackTrack(0,0,0);


    cout<<finalans<<endl;


}
