#include<bits/stdc++.h>
using namespace std;


int ConvertToBase(int decimal,int base)
{
    int result =0,power=0;

while(decimal)
{  // printf("result %d   modulus %d  rem  %d   power %d\n\n",result,(decimal%base),decimal/base,power);
    result= (result + ceil((pow(10,power) * (decimal%base))));
    decimal/=base;
    power++;

}

return result;

}


int main()
{
    cout<<ConvertToBase(1073,5)<<endl;
    //13243
    cout<<ConvertToBase(18982,8)<<endl;
    //45046


}
