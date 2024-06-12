#include<stdio.h>
#include<string.h>
int main()
{
	char st[100];
	printf("shaik jigunu-192111295\n");
	printf("Enter any String : ");
	scanf("%[^\n]s",&st);
	printf("\nString Before Reverse : %s\n",st);
	printf("\nString After Reverse : %s\n",strrev(st));
	return 0;
}
