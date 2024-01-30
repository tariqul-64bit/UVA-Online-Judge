#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        bool ans=true;
        int column,gape,a,b;
        cin>>column;
        scanf("%d%d",&a,&b);
        gape= abs(a-b);
        --column;
        while(column--)
        {
            cin>>a>>b;;
            if(gape != abs(b-a)) ans=false;
        }
        ans ? cout<<"yes\n" :  cout <<"no\n";
        if(cases) cout<<endl;
    }
}
