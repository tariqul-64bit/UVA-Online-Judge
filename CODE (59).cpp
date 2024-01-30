#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> take(150);
    vector<string> formatted(150);
    int i=0,max_length=0;
    while(getline(cin,take[i]))
    {
        int length=take[i].size();
        //cout<<length<<endl;
        max_length = max(max_length,length);
        i++;
        //cout<<max_length<<endl;
    }

    //cout<<i<<max_length;
    int x= --i;
    int j=0;
    while(j <= max_length)
    {
        for(int ll=x; ll>=0; ll--)
        {
            if( j <= take[ll].size()) cout<<take[ll][j];
            else cout<<" ";
        }
        cout<<endl;
        i=x;
        j++;
    }



}
