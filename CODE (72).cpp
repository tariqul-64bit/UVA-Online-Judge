#include<bits/stdc++.h>
using namespace std;
map<string,int> table;
map<string,int>::iterator it;

string replace_with_digit(string core)
{
    for(int i=0; i<core.size(); i++)
    {
        int a = (int) core[i];

        if(a==65 || a==66 || a == 67) core[i] = '2';
        else if(a==68 || a==69 || a == 70) core[i] = '3';
        else if(a==71 || a==72 || a == 73) core[i] = '4';
        else if(a==74 || a==75 || a == 76) core[i] = '5';
        else if(a==77 || a==78 || a == 79) core[i] = '6';
        else if(a==80 || a==82 || a == 83) core[i] = '7';
        else if(a==84 || a==85 || a == 86) core[i] = '8';
        else if(a==87 || a==88 || a == 89) core[i] = '9';

    }

    return core;

}



int main()
{
    freopen("input.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int tc,tcc=0;
    string waste;
    cin>>tc;

    for(tcc=0; tcc<tc; tcc++)
    {
        table.clear();
        if(tcc) cout<<endl;
        string tmp;
        int local;
        cin>>local;

        while(local--)
        {
            cin>>tmp;
            tmp.erase(remove(tmp.begin(), tmp.end(), '-'), tmp.end());
            tmp = replace_with_digit(tmp);

            it = table.find(tmp);
            if(it==table.end()) table.insert(make_pair(tmp,1));
            else it->second +=1;

        }



        int count1=0,count2=0;
        bool printed=false;
        for(it= table.begin(); it != table.end() ; ++it)
        {
            count1++;
            if(it->second == 1) count2++;
        }

        if(count1 == count2) cout<<"No duplicates.\n";


        if(!printed)
        {
            for(it= table.begin(); it != table.end() ; ++it)
            {
                if(it->second > 1)
                {
                    string x= it->first;
                    string y= x.substr(0,3);
                    string z= x.substr(3,4);

                    cout<<y<<"-"<<z<<" "<< it->second<<endl;
                }
            }
        }

    }
}
