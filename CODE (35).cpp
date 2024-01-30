#include<bits/stdc++.h>
using namespace std;
int arr[100];

int main()
{
    freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);

    int tc;

    cin>>tc;


    while(tc--)
    {
         string waste;
         getline(cin,waste);
         getchar();

        memset(arr,0,sizeof(arr));
        int length,bits;
        cin>>length>>bits;


        string core = "";
        for(int i=length-1; i>=(length-bits); i--) arr[i]='1';


        for(int i=0; i<length; i++)
        {
            if(!arr[i]) core = core + "0";
            else core+="1";
        }


        do
        {
            cout<<core<<endl;
        }while(next_permutation(core.begin(),core.end()));


if(tc) cout<<endl;
    }



}
