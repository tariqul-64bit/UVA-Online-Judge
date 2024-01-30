//The Problem is to HAVE a MULTI INPUTTING WHEN THERE ARE
//MORE THAN 9 OF SAME DIGIT IN A ROW.
//but thats not possible due to system.

//      I FAILED TO DO THIS .


#include<bits/stdc++.h>
using namespace std;
char x[1100][1100];
int i=0,ii,iii,j,jj,jjj;

void process()
{
    int j=0;
    int jj=0;
    int continuer=1;

    while( x[i][j] != '\0' )
    {
        if(x[i][j] == x[i][j+1])
        {
            continuer++;j++;
            continue;
        }

        x[i+1][jj++] = continuer;
        x[i+1][jj++] = x[i][j] - '0';
        j++;
        continuer=1;

        if(jj>=jjj)
        {   puts(x[i]);
            i++;
            if(i==iii) return;
            continue;
        }
    }

}





int main()
{


    while(gets(x[0]))

{
    puts(x[0]);
    cin>>iii>>jjj;
    process();
    for(int bangla=0;bangla<15;bangla++) puts(x[bangla]);


}
}
