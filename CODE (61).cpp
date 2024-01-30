#include<bits/stdc++.h>
using namespace std;
set<int> head;
set<int> knight;
set<int>::iterator  it;
set<int>::iterator  itcopy;

string doom  = "Loowater is doomed!\n";


int main()
{
    freopen("input.txt","r",stdin);
    int nh, nk;

    while( cin>>nh>>nk    && nh && nk)
    {   head.clear();
        knight.clear();
        int t;
        for(int i=0; i<nh; i++)
        {
            cin>>t;
            head.insert(t);
        }
        for(int i=0; i<nk; i++)
        {
            cin>>t;
            knight.insert(t);
        }

        int payable = 0;

        for(it = knight.begin() ; it != knight.end(); it++,knight.erase(it))
        {
            if( head.empty()  ) break;
            itcopy = head.begin();

            int aaa =*it;
            int bbb= *itcopy;

            if( aaa >= bbb)
            {
                payable += (int)(aaa);
                head.erase(itcopy);
            }

        }


        if(!head.empty()) cout<<doom<<endl;
            else cout<<payable<<endl;

    }


}
