#include <stdio.h>
#include <stdlib.h>
#define Max 10

void insert();
void delete();
void display();

int front=-1,rear=-1,queue[Max];


int main(int argc, char const *argv[])
{
	
	int ch;
	while(1)
	{

		printf("********Menu*******\n\n");
		printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n\n");
		printf("Enter Your Choice: ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				insert();
				break;
			case 2:
				delete();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("Wrong Selection\n");
		}	

	}
	return 0;
}
void insert()
{
	int item;
	printf("Enter the value of  item:");
	scanf("%d",&item);
	if(rear == Max-1)
		printf("Stack Overflow\n");
	if(front==-1 && rear==-1)
	{
		front=0;
		rear=0;
	}
	else
	{
		rear=rear+1;
	}
	queue[rear]=item;
	printf("Item Inserted\n");
}

void delete()
{
	int item;
	if(front==-1 || front > rear)
	{
		printf("Queue Underflow\n");
	}
	else
	{
		item=queue[front];
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front=front+1;
		}
		printf("Item deleted\n");
	}

}
void display()
{
	int i;
	if(rear == -1)
		printf("Queue Empty\n");
	else
	{
		printf("Printing Queue : \n\n");
		for(i=front;i<=rear;i++)
		{
			printf("%d\n",queue[i]);
		}
	}
}
