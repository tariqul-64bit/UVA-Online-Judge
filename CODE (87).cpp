/*
20
5 4 7 3 6 9 8 5 1 2 3 4 7 5 3 9 8 2 1 4
6 8 7 5 3 1 4 9 6 5 8 7 2 3 6 4 2 8 9 1
20
6 5 7 1 4 8 6 3 2 5 8 4 1 3 6 8 7 4 2 6
5 4 6 2 5 9 7 4 5 3 4 8 6 6 7 3 2 6 9 4
*/

// accepted ans  = 105, 106
// my code gives = 97,98
//if you can debug this , it will be accepted
//otherwise WA


#include<bits/stdc++.h>
using namespace std;
int a[25],b[25];
multimap<int,int> table;
multimap<int,int>::reverse_iterator it;

int main()
{
freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);


int n;

while(cin>> n )
{

//cout<<"N =="<<n<<endl;
memset(a,0,sizeof(a));
memset(b,0,sizeof(b));

for(int i=0;i<n;i++) cin>>a[i];
for(int i=0;i<n;i++) cin>>b[i];

table.clear();

for(int i=0;i<n;i++)
{
    table.insert(make_pair(b[i],a[i]));
}

int prev_aa = 0;
int prev_bb = 0;



for(it = table.rbegin() ; it != table.rend() ; it++)
    {
        pair<int,int> p = *it;
        int aa = p.second;
        int bb = p.first;

      //  cout<<aa<<bb<<endl;

        prev_aa = prev_aa + aa;

        prev_bb = max ( prev_aa + bb  ,  prev_bb +bb );



    }


cout<< prev_bb <<endl;

}


}
