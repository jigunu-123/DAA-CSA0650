#include<stdio.h>
int main()
{
	int a[100],i,max,min,n,j;
	printf("Enter array size:");
	scanf("%d",&n);
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
				min=j;
		}
		if(min!=i)
		{
			max=a[i];
			a[i]=a[min];
			a[min]=max;
		}
	}
	printf("Sorted Elements \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
