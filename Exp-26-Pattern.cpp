#include<stdio.h>
int main()
{
	int n,i,j,s,m;
	printf("shaik jigunu-192111295\n");
	printf("Number of rows : ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(s=1;s<=n-i;s++)
			printf("  ");
		for(j=1;j<=i;j++)
		{
			printf("%4d",j);
		}
		printf("\n");
	}
}
