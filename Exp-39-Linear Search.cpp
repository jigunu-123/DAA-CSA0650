#include<stdio.h>
int main()
{
	int a[100],n,i,x=0,z,p;
	printf("shaik jigunu-192111295\n");
	printf("\nenter the no of elements: ");
	scanf("%d",&n);
	printf("\nenter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to be searched: ");
	scanf("%d",&z);
	for(i=0;i<n;i++)
	{
		if(a[i]==z)
			p=i;
			x=1;
	}
	if(x==1)
		printf("Element is found in the position %d",p+1);
	else
		printf("Element is not found.....!");
	return 0;
}
