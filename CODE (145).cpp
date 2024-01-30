#include<bits/stdc++.h>
using namespace std;
#define INF 1e9

int lcm (vector<int>& vec);
int gcd (vector<int>& vec);
int gcdfortwo(int a, int b);




int gcdfortwo(int a, int b)
{
    if (b==0)
        return a;
    return gcdfortwo(b, a%b);
}



int lcm (vector<int>& vec)
{
    int syze = vec.size();
    int lcm=1;

    for(int i=0; i<syze; i++)
    {
        int gcd2 =  gcdfortwo(lcm,vec[i]);
        lcm = lcm*vec[i] / gcd2;
    }



    return lcm;
}





int gcd (vector<int>& vec)
{
    int syze= vec.size();
    int gcd =   INF;
    for(int i=0; i<syze; i++) gcd = min(gcd,vec[i]);

    for(; gcd>1; gcd--)
    {
        int cnt =0;


        for(int i=0; i<syze; i++)
            if(vec[i]%gcd==0 ) cnt++;

        if(cnt==syze) break;
    }

    return gcd;
}


int main()
{       freopen("in.txt","r",stdin);
        freopen("out.txt","w",stdout);

    int t,tc=0;
    cin>>t;

    while(t--)
    {   tc++;
        int up,down;
        vector<int> file;
        int n;
        cin>>n;
        int elements=n;
        while(n--)
        {
            int a;
            cin>>a;
            file.push_back(a);
        }

        int lcm_a=lcm(file);
        //cout<<lcm_a<<endl<<endl;

        up= elements*lcm_a;
        down=0;
        for(int i=0; i<file.size(); i++)
        {
            down += (lcm_a/file[i]);
        }

        int ans_a = up/gcdfortwo(up,down);
        int ans_b = down/gcdfortwo(up,down);

        cout<<"Case "<<tc<<": "<<ans_a<<"/"<<ans_b<<endl;

    }
}
