#include<stdio.h>
#include<stdlib.h>

int comp(void const * a, void const * b)
{
	return ( *(int*) b - *(int*)a);
}

int main()
{
	int tcase;

	scanf("%d",&tcase);

	while(tcase--)
	{
		int a[100],i=0;
		int sum = 0;

		while(scanf("%d",&a[i]))
		{
			sum += a[i++];
			if((getchar())=='\n') break;
		}

		qsort(a,i,sizeof(int),comp);

		int n = i,tot,val,j,flag;

		if(sum % 2==0)
		{

				}

			if(flag==1)
				printf("YES\n");
			else printf("NO\n");

		}
		else printf("NO\n");

		//for(i=0;i<n;i++)
			//printf("%d ",a[i]);

	}

	return 0;

}
