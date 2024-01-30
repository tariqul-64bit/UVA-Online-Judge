#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cs=0;
    long long unsigned Z,L,M,I,generated,counting;

    while(cin>>Z>>I>>M>>L  && (Z && I && M && L))
    {
        map<long long,int> mymap;
        generated = ( Z*L + I ) % M ;
        counting=0;

      while( !mymap.count(generated))
      {
            mymap[generated] = 1;
            generated = (generated*Z + I) % M ;
            counting++;
      }
cout<<"Case "<<++cs<<": "<<counting<<endl;
    }
}
