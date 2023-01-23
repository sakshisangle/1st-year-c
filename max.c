#include<stdio.h>
int main()
{
	int max=0,i,A[10]={0,1,2,3,4,,5,6,7,8,9};
	for(i=0;i<=9;i++)
	{
		if(A[i]>max)
		{
			max = A[i];
		}
	}
	printf("\n%d",max);
}
