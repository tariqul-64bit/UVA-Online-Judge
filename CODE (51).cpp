#include<bits/stdc++.h>
using namespace std;
char field[105][105];
string dorder;
int orientation,x,y,stick,r,c;



int moves(int a)
{

    if (dorder[a] == 'E') {orientation= (orientation+1)%4; }
    else if (dorder[a] == 'D')  { orientation=(orientation+3)%4;  }
    else
    {


        if(orientation == 1)
        {
            if(field[x-1][y] != '#' && x != 0 )
            {
                x--;
                if (field[x][y] == '*')
                {
                    field[x][y] ='.';
                    stick++;
                }
            }
        }


        if(orientation == 2)
        {
            if(field[x][y-1] != '#' &&  y!= 0 )
            {
                y--;
                if (field[x][y] == '*')
                {
                    field[x][y] ='.';
                    stick++;
                }
            }
        }

        if(orientation == 3)
        {
            if(field[x+1][y] != '#' && x != r-1 )
            {
                x++;
                if (field[x][y] == '*')
                {
                    field[x][y] ='.';
                    stick++;
                }
            }
        }

        if(orientation == 0)
        {
            if(field[x][y+1] != '#' && y != c-1 )
            {
                y++;
                if (field[x][y] == '*')
                {
                    field[x][y] = '.';
                    stick++;
                }
            }
        }
//cout<<"NOW AT POSITION"<<x<<y<<endl;
    }

return 1;
}








int main()
{
    int order,i,j;
    while(cin>>r>>c>>order && r && c)

    {
        stick=0;
        for(i=0; i<r; i++)
            for( j=0; j<c; j++)
            {
                cin>>field[i][j];
                if(field[i][j] == '#' || field[i][j] == '*' || field[i][j] == '.') continue;
                if(field[i][j] == 'N' ) orientation =1;
                if(field[i][j] == 'S' ) orientation =3;
                if(field[i][j] == 'L' ) orientation =0;
                if(field[i][j] == 'O' ) orientation =2;
//
                x=i;y=j;
//cout<<x<<y<<"or"<<orientation<<endl;
            }

        cin>>dorder;

        for(int i=0; i<order; i++) moves(i);

//cout<<x<<y<<endl;
            cout<<stick<<endl;

    }

}
