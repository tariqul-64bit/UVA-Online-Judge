#include<bits/stdc++.h>
using namespace std;
int k[40005];

int sum_of_digits(long long unsigned a)
{
    int sum=0;
    while(a>1)
    {
        sum += (int)a%10;
        a/=10;
    }




    return sum;



}


int main()
{
    int gi=0;

    for(long long unsigned i=2; i<40000 ; i++)
    {   if (!(i%10)) continue;
        long long unsigned sq=i*i;
        int sum_i=0,sum_sq=0;
        sum_i= sum_of_digits((double)i);
        sum_sq=sum_of_digits((double)sq);

                   if(sum_i == sum_sq) k[gi++] = i;
    }


       for(int i=0; i<100; i++) cout<<k[i]<<endl;

}
