#include<stdio.h>
int main()
{
	int n,i,flag=0;
	printf("shaik jigunu-192111295\n");
	printf("Enter any Number : ");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
			flag=1;
	}
	if(flag==0)
		printf("%d is a Prime Number ",n);
	else
		printf("%d is Not a Prime Number ",n);
	return 0;
}
