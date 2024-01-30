#include<bits/stdc++.h>
using namespace std;


int main()
{
    string core = "";

    string temp;
looper:
    while(getline(cin,temp))
    {
        if( temp == "#" ) break;
        core+= temp;

    }

int arr[35];
memset(arr,0,sizeof(arr));
int tmp_length;

for(int i=0; i<core.size();i++)
{   char c=core[i];
    tmp_length = 0;
    if(c == '\'' || c == '-') continue;
    else if (c == '.' || c == '?' || c== '!' || c== ',' || c== ' ' ) arr[tmp_length]++;
        else tmp_length++;

}

for(int i=1;i<31;i++) if(arr[i]) cout<<i<<" "<< `arr[i]<<endl;


    core = "";
    goto looper;
}
