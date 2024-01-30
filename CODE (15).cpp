#include<stdio.h>
#include<bits/stdc++.h>
#include<fstream>
using namespace std;


vector<string> result;

vector<string> split(const char *str, char c = ' ')
{


    do
    {
        const char *begin = str;

        while(*str != c && *str)
            str++;

        result.push_back(string(begin, str));
    }
    while (0 != *str++);

    return result;
}


int main()
{






    char item[1000000];

    while(cin.getline(item,sizeof(item)))
    {

        result.clear();
        split(item,' ');

        for(int i=0; i<result.size(); i++)
        {
            string z = result[i];
            for(int j=z.size()-1 ; j>=0; j--) cout<<z[j];


            i == result.size() -1 ? cout<<endl : cout<<" ";
        }

       // memset(item,0,sizeof(item));
       //dileo accepted . Na dileo accepted.
    }
}
