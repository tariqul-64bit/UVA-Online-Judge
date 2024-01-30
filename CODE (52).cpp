#include<bits/stdc++.h>
using namespace std;
//char field[100][110];
string dorder;
int orientation,x,y,stick,r,c;

void moves(int a);
void rotates(int a);
void moveforward(int a);
vector<string> field;


void moves(int a)
{
    if(dorder[a] == 'F') moveforward(a);
    else rotates(a);

}



void rotates(int a)
{
    if(dorder[a] == 'E') orientation = ((orientation+1)%4);
    else  orientation = ((orientation+3)%4);
}

void moveforward(int a)
{

    if(orientation == 1)
    {
        if(field[x][y-1] != '#' || y!=0 )
        {
            y--;

            if (field[x][y] == '*')
            {
                field[x][y] ='.';
                stick++;
            }
        }
    }


    if(orientation == 2)
    {
        if(field[x-1][y] != '#' ||  x!= 0 )
        {
            x--;
            if (field[x][y] == '*')
            {
                field[x][y] ='.';
                stick++;
            }
        }
    }

    if(orientation == 3)
    {
        if(field[x][y+1] != '#' || y !=(r-1) )
        {
            y++;

            if (field[x][y] == '*')
            {
                field[x][y] ='.';
                stick++;
            }
        }
    }

    if(orientation == 0)
    {
        if(field[x+1][y] != '#' || x!=(c-1) )
        {
            x++;
            if (field[x][y] == '*')
            {
                field[x][y] = '.';
                stick++;
            }
        }
    }




}


int main()
{
    int order,i,j;
    while(cin>>r>>c>>order && r && c)

    {
        stick=0;
        for(i=0; i<r; i++){
                string t;
                field.push_back(t);
            for( j=0; j<c; j++){
                if(field[i][j] == 'N') { orientation =1; x=i;y=j;}
                if(field[i][j] == 'S') { orientation =3; x=i;y=j;}
                if(field[i][j] == 'L') { orientation =0; x=i;y=j;}
                if(field[i][j] == 'O') { orientation =2; x=i;y=j;}
            }
        }
        cin>>dorder;

        for(int i=0; i<dorder.size(); i++)
        {
            moves(i);
        }

        cout<<stick<<endl;
    }

}
