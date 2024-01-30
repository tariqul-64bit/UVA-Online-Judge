#include<bits/stdc++.h>
using namespace std;
string FROM,TO,core;

int i;





int main()
{
freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);

    int tc;
    cin>>tc;
    while(tc--)

    {
        char c;
        cin>>FROM;
        cin>>TO;
        cout<<TO<<endl;
        cout<<FROM<<endl;


        while(cin>>core)
        {
            if(!core.size()) cout<<endl;
            for(int k=0; k<core.size(); k++)
            {

                for(i=0; i<FROM.size(); i++)
                {
                    if(core[k]==FROM[i])
                    {
                        cout<<TO[i];
                        break;
                    }
                    else if( i>= FROM.size() -1 ) cout<<core[k];


                }
            }


        }

            FROM.clear();
            TO.clear();
    }
}
