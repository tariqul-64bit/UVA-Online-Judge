Surely this code from internet will give a WA
#include<bits/stdc++.h>
using namespace std;
int main()
{

//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

    int n;
    char temp[1000];

    while(cin>>n && n)
    {   gets(temp);
        int counter = 0 ;
        while(counter < strlen(temp))
        {
            string z = temp.substr(counter,n);
            strrev(z);
        }
        cout<<z<<endl;
    }


}
