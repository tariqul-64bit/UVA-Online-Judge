#include<bits/stdc++.h>
using namespace std;
vector<string> table ;
int visit[15][15];
int steps=0,r,c,z,i ;
bool killed = false ;

void thecycle(int rr, int cc)
{

    while(1)
{

    if( rr<0 || cc<0 || rr>= r || cc>=c )
    {
        cout<<steps<<" step(s) to exit"<<endl;killed = true ; break; }




    if(visit[rr][cc] != -1)
    {
        cout<<visit[rr][cc]<<" step(s) before a loop of "<<steps-visit[rr][cc]<<" step(s)"<<endl;
        killed = true ;
        break ;

    }


    visit[rr][cc] = steps ;


    if( killed  ) return ;

    if( table[rr][cc] == 'S' ) rr++;
    else if( table[rr][cc] == 'E' ) cc++;
    else if( table[rr][cc] == 'N' ) rr--;
    else if( table[rr][cc] == 'W' ) cc--;

    steps++;
}

/*
for( i  = 0 ; i<10 ; i++ )
    for( int j =  0  ; j< 10 ; j++)
{
    if( j== 0 ) cout<<endl;
    cout<<visit[i][j];

}

*/


}


int main()
{

//freopen("inp.txt","r",stdin);

    while(cin>>r>>c>>z && r && c && z)
    {
        table.clear();
        string d;
        for(i = 0 ; i<r ; i++ ) {cin>>d ; table.push_back(d);}

        //for(int i = 0 ; i< table.size() ; i++ ) cout<<table[i]<<endl;


        killed = false ;
        memset(visit,-1,sizeof(visit));

        steps = 0;
        z--;
        thecycle(0,z);

    }


}
