#include<bits/stdc++.h>
using namespace std;
map<int, set<int> > table ;
bool visit[28];
int counts ;
set<int>::iterator it ;


void floodfill(int a)
{
    stack<int> s;
    s.push(a);

    cout<<"Pushed"<<s.top()<<endl ;
    cout<<"Stack is now "<<s.top();

    while(!s.empty())
    {
        int w = s.top();
        cout<<"w equals to "<<w<<endl ;
        s.pop();
        cout<<"After Popping Stack is now ";
        if(s.empty()) cout<<"empty"<<endl;
        else cout<<"NOT empty"<<endl;

        cout<<endl;

        visit[w] = true;
        cout<<"Marked"<<w<<"as true \n";





        for( it = table[w].begin() ; it!= table[w].end() ; ++it)
        {
            if (visit[*it] == true )
                continue;

            s.push(*it);
            cout<<"Puhsed"<<*it<<endl;

        }

    }

}


int main()
{
    int tc;
    cin>>tc;
    string temp ;
    getchar();
    getline(cin,temp);

    while(tc--)
    {
        int a ;


        getline(cin,temp);
        a = (int) temp[0] - 65 ;
        //cout<<temp;
        cout<<a<<endl;
        table.clear();
        memset(visit, 0,sizeof(visit));
        while(getline(cin,temp) && temp.size())
        {
            int u = temp[0] - 65 ;
            int v = temp[1] - 65 ;
            table[u].insert(v);
            table[v].insert(u);




        }

        cout<<"THE FULL LIST\n";
        map<int,set<int> >::iterator it ;
        set<int>::iterator dfx;

        for(it = table.begin() ; it !=table.end() ; ++it)
        {
            int ff = it->first ;
            set<int> gg = it->second ;

            cout<<ff;


            for(set<int>::iterator dfx = gg.begin () ; dfx != gg.end(); ++dfx)
                cout<<*dfx;
            cout<<endl;
        }
        cout<<"THE FULL LIST\n";

        for(int i = 0 ; i <= a; i++)
        {

            if( visit[i] == false  )
            {
                counts++;
                floodfill(i);

            }

        }



        cout<<counts;
        counts=  0 ;

    }


}
