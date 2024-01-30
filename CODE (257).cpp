#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,tc=0;
    cin>>t;getchar();
    string input;
    while( getline(cin,input))
    {
        cout<<"Case "<<++tc<<": ";
        for(int i=0;i<input.size();)
        {
           char c = input[i];
           int multiplier= 0;
           while(isdigit(input[i+1]))
           {    i++;
               multiplier =  10*multiplier + input[i]-'0';
           }
            i++;

            for(int j=0;j<multiplier;j++) cout<< c;


        }
        cout<<endl;
    }

}
