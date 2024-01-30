#include<bits/stdc++.h>
using namespace std;

bool morelines=false;

int main()
{
  //  freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
    int a,n,tc=0;
    while(cin>>n)

    {
        if(!n) {cout<<endl;break;}

        if(tc)cout<<endl;
        ++tc;
        morelines=true;

        while(morelines)
        {
            int k=1;
            stack<int>store;
            for(int i=0; i<n; i++)
            {
                cin>>a;
                if( a == 0)
                {
                    morelines=false;
                    break;
                }

                for(int j = k ; j<=n; )
                {

                    if(j==a )
                    {
                        ++k;
                        break;
                    }

                    else if((!store.empty()) && (a==store.top()))
                    {
                        store.pop();
                        break;
                    }
                    else
                    {
                        store.push(j);
                        k++;
                        j++;
                    }


                }

            if(k>=n) {
                    if((!store.empty()) && (a==store.top())) store.pop();

            }


            }

            if(a)
            {
                if(store.empty()) cout<<"Yes\n";
                else cout<<"No\n";

              //  if(store.empty()) cout<<"Yahoo !It's Empty\n";
             //   else
               // {
                  //   while(!store.empty())
                   // {
                     //   cout<<store.top()<<endl;
                      //  store.pop();
                //    }
               // }

            }

        }
    }




}
