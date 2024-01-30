#include<stdio.h>

int main()
{
   // freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

    int tc;
    scanf("%d",&tc);


    for(int tcc= 1 ; tcc<=tc ; tcc++)
    {
        int len;
        scanf("%d",&len);
        getchar();
        char a[110];
        gets(a);
        int c=0;
        for(int i=0; i<len; i++)
        {
            if(a[i] == '.')
            {
                c++;
                i+=2;
            }
        }

        printf("Case %d: %d\n",tcc,c);

    }


}

