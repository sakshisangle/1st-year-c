
#include<stdio.h>
#include<process.h>
int main()
{
int i,ch=0,x=10,y=8,z;
do{
	printf("\nchoise based menu program");
	printf("\n enter 1 for add");
	printf("\n enter 2 for sub");
	printf("\n enter 3 for mul");
	printf("\n enter 0 for exit");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:z=x+y;
		printf("%d\n",z); 
		break;
		case 2:z=x-y;
		printf("%d\n",z);
	    break;
		case 3:z=x*y;
		printf("%d\n",z);
		case 0: exit(0);
		default : printf("default case ");
		break;
	}
}
	while(1);
}

		
	
