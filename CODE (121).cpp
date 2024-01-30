#include<bits/stdc++.h>
using namespace std;
vector<string> people;
string song[16] = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you" };


int main()
{

    int n,n_decremented;
    string temp;
    cin>>n;
    n_decremented= n;

    while(n_decremented--)
    {
        cin>>temp;
        people.push_back(temp);
    }


    if(n <=16)
    {
        for(int i=0;i<16;i++)
        {
            cout<<people[i%n]<<": "<<song[i]<<endl;
        }

    }


    else if( n>16)
    {
        int aaa = (n/16)+1;

            for(int i=0;i<aaa*16;i++)
        {
            cout<<people[i%n]<<": "<<song[i%16]<<endl;
        }

        }





}
