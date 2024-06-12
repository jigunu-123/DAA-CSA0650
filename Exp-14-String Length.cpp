#include<stdio.h>
#include<string.h>
int main()
{
	int l;
	char st[100];
	printf("shaik jigunu-192111295\n");
	printf("Enter any String : ");
	scanf("%[^\n]s",&st);
	l=strlen(st);
	printf("Length of the given String : %d",l);
	return 0;
}
