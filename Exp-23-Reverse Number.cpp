#include<stdio.h>
int main()
{
	int a,rev=0,r;
	printf("shaik jigunu-192111295\n");
	printf("Ente any Number : ");
	scanf("%d",&a);
	while(a!=0)
	{
		r=a%10;
		rev=rev*10+r;
		a=a/10;
	}
	printf("Reverse of given Number is : %d",rev);
	return 0;
}
