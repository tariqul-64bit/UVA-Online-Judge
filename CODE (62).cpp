#include<bits/stdc++.h>
using namespace std;
int head[20099];
int knight[20099];




string doom  = "Loowater is doomed!\n";


int main()
{
   // freopen("input.txt","r",stdin);
    int nh, nk;

    while( cin>>nh>>nk    && (nh && nk))
    {
        memset(head,0,sizeof(head));
        memset(knight,0,sizeof(knight));
        int t;
        for(int i=0; i<nh; i++)
        {
            cin>>t;
            head[i] = t;
        }
        for(int i=0; i<nk; i++)
        {
            cin>>t;
            knight[i] = t;
        }


        sort(head,head+nh);
        sort(knight,knight+nk);


        int payable = 0, j=0;

        for(int i=0; i< nk ; i++)
        {
            if( j == nh) break;
            if( knight[i] >= head[j])
            {
                j++;
                payable+= knight[i];
            }

        }


        if( j != nh) cout<<doom;
        else cout<<payable<<endl;


    }


}
