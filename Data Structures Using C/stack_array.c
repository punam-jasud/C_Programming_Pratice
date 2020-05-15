#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

void push(int);
void pop();
void display();

int stack[SIZE],top=-1;


void main()
{
	
	int value,choice;
	while(1)	
	{
		printf("\n\n******MENU********\n\n");
		printf("1.Push\n2.Pop\n3.Display\n4.Exit");
		printf("Enter Your Choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter the value to insert: ");
				scanf("%d",&value);
				push(value);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("\nWrong Selection\n");
		}
		
	}

}

void push(int value)
{
	if(top == SIZE-1)
		printf("Stack Full\n");
	else
	{
		top++;
		stack[top]=value;
		printf("Insertion Success!\n");
	}

}
void pop()
{
	if(top==-1)
		printf("Stack Empty\n");
	else
	{
		printf("Deleted : %d\n",stack[top]);
		top--;
	}
}
void display()
{
	if(top==-1)
		printf("Stack Empty\n");
	else
	{
		int i;
		printf("Stack Elements are : \n\n");
		for(i=top;i>=0;i--)
			printf("%d\n",stack[i]);
	}
}


























