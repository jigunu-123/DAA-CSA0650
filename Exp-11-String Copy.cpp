#include<stdio.h>
#include<string.h>
int main()
{
	char original[100],copy[100];
	printf("shaik jigunu-192111295\n");
	printf("Enter Original String : ");
	scanf("%[^\n]s",&original);
	strcpy(copy, original);
	printf("Copied String : %s",copy);
	return 0;
}
