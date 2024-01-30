#include<bits/stdc++.h>
using namespace std;
vector<int> finalcommand;
string cmd = "IEHOVA";
int r,c;
vector<string> vs(100);


map<int,string> table;



void backtracker(int row,int col,int index,int command,vector<int> runcommand)
{
    //if out of index return

    if(row<0 || col<0 || col>=c) return;




    runcommand.push_back(command);

    //if found the '#' then copy the vector to of this recursion to a final vector and return
    if(vs[row][col] == '#' && index==0)
    {
        finalcommand = runcommand;
        return;
    }
    else if (vs[row][col] != cmd[index] ) return;


    else
    {
        index++;
        backtracker(row,col-1,index%6,0,runcommand);
        backtracker(row,col+1,index%6,1,runcommand);
        backtracker(row-1,col,index%6,2,runcommand);
    }

}

int main()
{

    table[0] = "left";
    table[1] = "right";
    table[2] = "forth";

    freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);

    int tc;
    cin>>tc;
    while(tc--)
    {
        finalcommand.clear();
        cin>>r>>c;
        getchar();
        for(int i=0; i<r; i++) cin>>vs[i];


       // cout<<vs[0][0];
       // cout<<vs[r-1][c-1];

        vector<int> rc;

        for(int i=0; i<c; i++)
            if(vs[r-1][i] == '@')
            {

                backtracker(r-1,i-1,0,0,rc);
                backtracker(r-1,i+1,0,1,rc);
                backtracker(r-2,i,0,2,rc);

            }



        for(int i=0; i<finalcommand.size(); i++)
        {
            cout<<table[finalcommand[i]];
            i != finalcommand.size()-1 ? cout<<" ": cout<<endl;
            }


    }



}
