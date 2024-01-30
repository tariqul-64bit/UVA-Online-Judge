// Complete korinai. Complete korte hobe.

#include<bits/stdc++.h>
using namespace std;
int main()
{

int a;

    while( cin>>a  && a)
    {

        int arr[100];
        arr[0]=a;
        int b;
        int i=1,length,up_occured=0,down_occured=0,server_busy=0;
        bool upping,downing,leveling;
        double up=0,down=0,up_total=0,down_total=0;
        while(cin>>b &&b) arr[i++]=b;
        length=i;
        for(int i=1; i<length; i++)
        {

if(arr[i] == arr[i-1]) server_busy++;

            else if(arr[i] > arr[i-1])
            {   if(downing) up_total+= up;
                upping=true;
                up++;
                up_occured++;up_fuse=1;
                up+=server_busy;
                server_busy=0;
            }
            else if (arr[i] < arr[i-1])
            {   if(upping) down_total +=down;
                downing=true;
                down++;
                down_occured++;
                down+=server_busy;
                server_busy=0;

            }


            }



}




}


