#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,k,m,n;
	printf("shaik jigunu-192111295\n");
	printf("Enter no.of rows and columns of matrix\n");
	scanf("%d%d",&m,&n);
	printf("Enter Elements of First Matrix\n");
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter Elements of Second Matrix\n");
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("b[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			c[i][j]=0;
		}
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			for(k=1;k<=m;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("Resultant Matrix\n");
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
