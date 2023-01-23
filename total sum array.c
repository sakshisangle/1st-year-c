#include<stdio.h>
int main()
{
	int a[10],i,sum=0;
	printf("enter the element array");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=9;i++)
	{
		sum=sum+a[i];
	}
	printf("total is = %d",sum);
}

