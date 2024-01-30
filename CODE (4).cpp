#include<bits/stdc++.h>
using namespace std;
vector<int> fraction_result;
vector<int> fraction_repeater;



bool nonrepeating()
{

int i=0;
int j=fraction_repeater.size();
if(i==j) return true;
else if( fraction_repeater[i] == fraction_repeater[j-1]) return false;
else return true;

}


int main()
{

    int a,b;
    int int_result;

    while(cin>>a>>b)
    {
        fraction_repeater.clear();
        fraction_result.clear();
        int_result = a/b;
        a =a%b;
        a *=10;
int lll=0;
        while(++lll <20 )
        {   if( a%b == 0) break;
            fraction_repeater.push_back(a);
            fraction_result.push_back((int)(a/b));
            a  =  a%b;
            a *= 10;


        }



        cout<<int_result<<".";
        for(int i=0;i<fraction_result.size(); i++ ) cout<<fraction_result[i];
        cout<<endl;

    }

}
