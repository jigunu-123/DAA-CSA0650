#include<stdio.h>
int main()
{
	int a,b,i,j;
	printf("shaik jigunu-192111295\n");
	printf("Enter lower and upper limits \n");
	scanf("%d%d",&a,&b);
	printf("Prime Numbers from %d to %d are\n",a,b);
	for(i=a+1;i<b;i++)
	{
		int flag=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				flag=1;
		}
		if(flag==0)
			printf("%d\t",i);
	}
	return 0;
}
