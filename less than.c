#include<stdio.h>
int main()
{
	int i,count=0,index,sum;
    int A[10]={1,2,3,14,15,1,26,8,29,10};
	for(i=0;i<10;i++)
	{
		if(A[i]<25)
		{
			count++; 
			index =index+i;
			sum=sum+A[i];
		}
	}
	printf("%d %d %d",count,index,sum);
}
