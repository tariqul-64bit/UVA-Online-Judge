#include <bits/stdc++.h>
using namespace std;


string Str;
long long p, c ;
int main()
{
    freopen("input.txt","r",stdin);

    int cs = 1 ;
    while( cin>>p>>c)
    {
        if( p == 0 && c == 0 ) break ;
        deque<long long >Q;
        deque<long long >::iterator it;

        for(int i = 1 ; i <= p && i <= 1000 ; i++ ) Q.push_back(i);
        long long x ;
        printf("Case %d:\n",cs++);
        while(c--)
        {
            cin>>Str;
            if( Str[0] == 'N' )
            {
                x = Q.front() ;
                Q.pop_front();
                Q.push_back(x);
                cout<<x<<endl;
            }
            else
            {
                cin>>x;
                for(it = Q.begin() ; it != Q.end() ; ++it )
                {
                   if(*it == x) {Q.erase(it) ;
                    break ;}
                }
                Q.push_front(x);
            }
        }
    }
}
