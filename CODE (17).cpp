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





    string vowel = "aeiouAEIOU";
    char item[1000000];

    while(cin.getline(item,sizeof(item)))
    {

        result.clear();
        split(item,' ');

        for(int i=0; i<result.size(); i++)
        {
            string z = result[i];
            bool isconsonantfirst=true;



            for(int j=0; j<z.size(); j++)
            {
                if(j==0)
                {
                    for (int k=0; k<10; k++)
                    {
                        if(z[j] == vowel[k])
                            isconsonantfirst=false;
                    }
                    if(!isconsonantfirst) cout<<z[j];
                }


                else cout<<z[j];


            }

            if(isconsonantfirst == true ) cout<<z[0];

            cout<<"ay";

            i == result.size() -1  ? cout<<"."<<endl : cout<< " ";



        }

        // memset(item,0,sizeof(item));
        //dileo accepted . Na dileo accepted.
    }
}
