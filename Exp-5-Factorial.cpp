#include<stdio.h>
int main()
{
	int n,i,fact=1;
	printf("shaik jigunu-192111295\n");
	printf("Enter any Number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("Factorial of given number is : %d",fact);
	return 0;
}
