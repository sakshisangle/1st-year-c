#include<stdio.h>
#include<stdlib.h>
struct ndt
{
	int data,temp,start;
	struct ndt* next;
};
typedef  struct ndt node;
void display(void);
void create(void);
void insert(void);
temp1 = start;
while(temp1->data!=20)
{
	temp1=temp2->next;
}
void main()
{
int choise;
do{
printf("this is a program to implement a linked list\n");
printf("press 1 for creation\n");
printf("press 2 for insert\n");
printf("press 3 for Display\n");
printf("press 4 for exit\n");
scanf("%d",&choise);
switch(choise)
{
case 1:create(); break;
case 2:insert(); break;
case 3:display(); break;
case 4:exit(0); break;
}
}while(1);
}
void display(void)
{
	node *temp1;
	temp1=start;
	printf("START->");
	while(temp1!=NULL)
	{
		printf("%d-->",temp1->data);
		temp1=temp1->next;
	}
	printf("END\n");
}
void create(void)
{
	node * temp;
	temp= (node *)malloc(sizeof(node));
	if(temp!=NULL)
	{
		printf("enter value for data");
		scanf("%d",&temp->data);
		start=temp;
		temp->next=NULL;
	}
	else
	{
		printf("memory could not be allocation by opreating");
	}
}
void insert(void)
{
	node *temp;
	node *temp1=start;
	while(temp->next!=NULL)
{
	temp=temp->next;
}
temp1=(node *)malloc(sizeof (node));
if(temp1==NULL)
{
	printf("memory not allocatoin");
}
else
{
	printf("Enter Data");
	scanf("%d",&temp1->data);
	temp1->next=temp1->next;
	temp1->next=temp;
}
}

