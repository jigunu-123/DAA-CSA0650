#include<stdio.h>
int fib(int i);
int main()
{
	int n,i;
	printf("Enter n : ");
	scanf("%d",&n);
	printf("shaik jigunu-192111295\n");
	printf("Fibonacci Series \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",fib(i));
	}
}
int fib(int i)
{
	if(i==0)
		return 0;
	else if(i==1)
		return 1;
	else
	{
		return (fib(i-1)+fib(i-2));
	}
}
