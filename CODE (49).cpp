#include<bits/stdc++.h>
using namespace std;
vector<int> take;
vector<set<int> > table();
int global_index = 0;
int progressive =0;



int main()
{
    freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

    int n;
    while(cin>>n && n)
    {
        global_index = 0;
        progressive = 0;
        table.clear();
        take.clear();
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a ;
            take.push_back(a);
        }


        sort(take.begin(),take.end() );

        bool insertable= true;

        for(insertable = true; progressive<n; progressive++)
        {

            int element = take[progressive];


            for(int ii=0; ii<global_index; ii++)
            {
                set<int>::iterator it =   table[ii].find( element);

                if( it == table[ii].end())
                {
                    table[ii].insert(element);
                    insertable =false;
                    break;
                }

            }

            if(  insertable )
            {cout<<"here\n";
                table[global_index].insert(element) ;
                cout<<"inserting"<<element<<endl;
                global_index++;
            }

        }


        cout<<global_index<<endl;
    }


}
