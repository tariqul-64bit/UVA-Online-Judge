#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);

    string t;
    while(cin>>t)
    {
        bool fuse=false;
        int decimal_sum=0;
        int max_digit=0;
        for(int i=0; i<t.size() ; i++)
        {
            int c=(int)(t[i]-'0');

            if(c>9) c-=7;

            if(c>35) c-=6;


            decimal_sum += c;
            max_digit= max(max_digit, c) ;

        }

        //cout<<decimal_sum<<" "<<max_digit;

        for(int i=max_digit; i<62; i++)
        {

            if((decimal_sum%i)==0)
            {
                fuse=true;
                cout<<i+1<<endl;
                break;
            }

        }
        if( fuse== false) cout<<"such number is impossible\n";
    }

}
