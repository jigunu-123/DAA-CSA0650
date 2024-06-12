#include<stdio.h>
int main()
{
	int a[100],i,j,n,x;
	printf("Enter array size: ");
	scanf("%d",&n);
	printf("Enter array Elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<(n-1);i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				x=a[i];
				a[i]=a[j];
				a[j]=x;
			}
		}
	}
	printf("Sorted Array\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
