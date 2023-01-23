#include<stdio.h>
main()
{
	int i,j;
	printf("enter the temp in celcius\n");
	scanf("%d",&i);
    j=i+273;
	printf("j=%d",j);

if(j>80)
{
	printf(" \n you have a fever ");
}
else
{
	printf("\n you have a not fever ");
}
}
