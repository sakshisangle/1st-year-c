#include<stdio.h>
int main()
{
	int i,t,j,x[5]={9,8,4,5,2};
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)               
		{
			if(x[j]>x[j+1])
		    {
				t=x[j];                                                                       
				x[j]=x[j+1];
				x[j+1]=t;
			}
		} 
	}
for (i=0;i<=4;i++)
{
	printf("\n%d",x[i]);
}
}
