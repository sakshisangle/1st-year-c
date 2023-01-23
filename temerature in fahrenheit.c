#include<stdio.h>
main()
{
	int i,j;
	printf("enter the temp in celcius\n");
	scanf("%d",&i);
	j=i*9/5+32;
	printf("Temerature in fahrenheit j=%d",j);
	if(j>108)
	{
	printf("\n you have a fever");
}
else if(j<85)
{
	printf("\nyou have a low temp");
}
	else
	{
	printf("\nyou have not a fever");
}
}

