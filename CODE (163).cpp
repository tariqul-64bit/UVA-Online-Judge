#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[1005];
    while(scanf("%s",&str) ==1 )

{
if(!strcmp(str,"0")) break;
int len=strlen(str);
int num= str[0] -'0';
if(len>1 && len%2==0) num=num*10 + str[1]-'0';
len= (len-1)/2;
printf("%d",(int)sqrt(num));
for(int i=0;i<len;i++) printf("%c",'0');
printf("\n");
}

}
