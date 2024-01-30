#include<bits/stdc++.h>
using namespace std;
int idx,fuse;
int binary[100];

void fillbinary(int ab)
{
    while(ab--) binary[idx++] = fuse;
}

void outputresult()
{
    idx--;
    int res=0;
    int po=0;
    for(int i=idx; i>=0; i--)
    {
        res += (binary[i]) * (pow(2,po++));
    }

    cout<<res<<endl;
}


int main()
{
    string x;

    while(cin>>x && (x[0] != '~'))
    {
        if(x[0] == '#')
        {

            outputresult();
            memset(binary,0,sizeof(binary));
            idx=0;
        }

        else if(x.size() ==1 ) fuse=1;
        else if(x.size() ==2)  fuse=0;
        else if(x.size() >2)
        {
            fillbinary((x.size()-2));
        }

    }


}
