#include<bits/stdc++.h>
using namespace std;
long long prime_list[10000];

bool isprime(long long i)
{
for(int j=2;j<i;j++) if((i%j)==0) return false;

return true;

}


void generate_the_prime_list()
{
    int counts=0;
    long long unsigned maxima = 2147483648;

    for(long long i=2; i<21474; i++)
    {

        if(isprime(i)) prime_list[counts++] = i;

    }

}



int main()
{
    memset(prime_list,0,sizeof(prime_list));
    generate_the_prime_list();

for(int i=0;prime_list[i];i++) cout<<prime_list[i]<<endl;




}
