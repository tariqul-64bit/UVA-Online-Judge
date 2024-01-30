#include<bits/stdc++.h>
using namespace std;


int main()
{

    int n;
    cin>>n;
    cin.ignore();

    map<string,int> mapper;

    while(n--)
    {
        string country_name;
        cin>>country_name;

        string lady_name;
        getline(cin,lady_name);

        mapper[country_name] += 1;

    }


    map<string,int>::iterator it;

    for(it = mapper.begin() ; it != mapper.end() ; ++it)
        cout<<it->first<<" "<<it->second<<endl;


}
