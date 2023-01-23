#include<stdio.h>
int main()
{
	int i;
	int x[10];
	for(i=0;i<=9;i++)
	{
	scanf("%d",&x[i]);
    }
    for(i=0;i<=9;i++)
    {
     x[i]=x[i]+1;
	}
	for(i=0;i<=9;i++)
	{
		printf("\n%d",x[i]);
	}
}
