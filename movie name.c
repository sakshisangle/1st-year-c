
#include<stdio.h>
#include<process.h>
int main()
{
int i,ch=0,x=10,y=8,z;
do{
	printf("\nchoise based menu program");
	printf("\n enter 1 for Thor");
	printf("\n enter 2 for Lion king");
	printf("\n enter 3 for iron man");
	printf("\n enter 0 for exit");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		break;
		case 2:
	    break;
		case 3:
		break;
		case 0: exit(0);
		default : printf("default case ");
		break;
	}
}
	while(1);
}
