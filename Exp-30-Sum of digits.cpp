#include<stdio.h>
int main()
{
	int n,i,sum=0,r;
	printf("shaik jigunu-192111295\n");
	printf("Enter any number : ");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("Sum of the digits in the given number : %d",sum);
	return 0;
}
