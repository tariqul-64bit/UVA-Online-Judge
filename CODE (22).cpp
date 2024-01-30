#include<bits/stdc++.h>
using namespace std;
int row[110],column[110];
int arr[110][110];
int cx=-1,cy=-1;


int check(int n)
{
    int i,j,crow=0,ccolumn=0;

    for(int i=0; i<n; i++)
    {
        if(row[i]%2)
        {
            crow++;
            cx=i;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(column[i]%2)
        {
            ccolumn++;
            cy=i;
        }
    }
    if(!(crow+ccolumn)) return 1;

    if(crow>1 || ccolumn>1) return 0;

    if(crow == 1 && ccolumn ==1 ) return 2;


    }


int main()
{
   // freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);



    int n;
    while(cin>>n && n)
    {
        memset(arr,0,sizeof(arr));
        memset(row,0,sizeof(row));
        memset(column,0,sizeof(column));
        cx=cy=-1;
        int i,j;

        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
            {
                scanf("%d",&arr[i][j]);
                row[i] += arr[i][j];
                column[j]+= arr[i][j];
            }


        int ans = check(n);

        if(!ans) cout<<"Corrupt\n";
        else if (ans == 1) cout<<"OK\n";
        else cout<<"Change bit ("<<cx+1<<","<<cy+1<<")\n";

/*
        cout<<"rowlist\n";
        for(int i=0;i<n;i++)cout<<row[i]<<" ";
        cout<<endl;
        cout<<"columnlist\n";
for(int i=0;i<n;i++)cout<<column[i]<<" ";
cout<<endl;
*/

    }


}
