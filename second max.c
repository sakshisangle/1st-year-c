#include<stdio.h>
main()
{
	int max=0,max2=0,i,t;
	int a[10]={1,2,3,4,5,6,7,8,9,11};	

for(i=0;i<=9;i++)
{
	if (a[i]>max2)
	{
		if(a[i]>max)
		{
			
			max2=max;
			max=a[i];
		}
		else
		max2=a[i];
	}
}
printf("second maximum value is %d",max2);
}
