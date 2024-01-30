#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool check=true;
string x;
while (getline(cin,x) && x!= "*")

    {   bool check=true;
        char c= toupper(x[0]);
        int l=x.size();
        for(int i=1; i<l-1; i++) {if(x[i] == ' ' && toupper(x[i+1]) != c ) {check=false; break;}  }

        if(check) cout<<"Y\n";
        else cout<<"N\n";

    }

}
