#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int first,second;

    while(T--)
    {
        cin>>first>>second;
        int f=1;
        int s=1;
        int steps=0;
        while( first < second )
        {
            first  += f;
            f++;
            steps++;
            if(first>=second) break;

            second -= s;
            s++;
            steps++;
            if(first>=second) break;
            //cout<<first<<" "<<second<<endl;

        }
        //fstream file;
        //file.open("out.txt",ios_base::app);
        //file<<steps<<endl;

        cout<<steps<<endl;
    }

}
