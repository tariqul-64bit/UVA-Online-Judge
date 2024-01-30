#include<bits/stdc++.h>
using namespace std;

bool comp(int a,int b)
{
    return a>b;
}


int main()
{
  //  freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

    int tc;
    cin>>tc;
    for(int tcc=1; tcc<=tc; tcc++)
    {
        int r,c,typeA,typeB;
        cin>>r>>c>>typeA>>typeB;
        getchar();
        string core="",tmp;
        for(int i=0; i<r; i++)
        {
            getline(cin,tmp);
            core+=tmp;
        }
        //sort(core.begin(),core.end());
        //cout<<core;

        int arr[150];
        memset(arr,0,sizeof(arr));
               for(int i=0; i<core.size(); i++)
    {
        arr[(int)core[i]]++;
        }
        sort(arr,arr+150,comp);

      //  for(int i=0;i<150;i++) cout<<arr[i];
      //  cout<<endl;

        int maxima=arr[0],freq=1;
                   for(int i=0; i<150; i++)
    {
        if(arr[i]>arr[i+1]) break;
            else freq++;
        }


        printf("Case %d: ",tcc);
        cout<<((typeA*freq*maxima) + ((r*c)-(freq*maxima))*typeB)<<endl;
    }


}
