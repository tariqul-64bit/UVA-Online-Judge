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
{

    vector<int> file;

    int n;
    cin>>n;
    getchar();
    while(n--)
    {
        vector<int> vec;
        string a;
        getline(cin,a);
        stringstream ss(a);

int ll;
        for(;ss>>ll;)
        {
            vec.push_back(ll);
        }


    //    for(int i=0;i<vec.size();i++) cout<<vec[i];


        int maxgcd=0;

        for(int i=0; i < (vec.size()-1) ; i++)
        {
            for(int j=i+1; j<vec.size(); j++)
            {
                maxgcd = max( maxgcd,gcdfortwo(vec[i],vec[j]));
            }
        }
            cout<<maxgcd<<endl;
    }


}
