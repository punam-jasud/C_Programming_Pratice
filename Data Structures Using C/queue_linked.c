#include <stdio.h>
#include <stdlib.h>
#define Max 10

void insert();
void delete();
void display();

struct Node
{
	int data;
	struct Node *next; 
};
struct Node *front=NULL,*rear=NULL;


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
	int data;
	struct Node *ptr = (struct Node*)malloc(sizeof(struct Node*));
	if(ptr==NULL)
		printf("Memory Not Allocated\n");
	else
	{
		printf("Enter the value of  item:");
		scanf("%d",&data);

		ptr->data=data;
		ptr->next=NULL;

		if(front==NULL)
		{
			front=ptr;
			rear=ptr;
			front->next=NULL;
			rear->next=NULL;
		}
		else
		{
			rear->next=ptr;
			rear=ptr;
		}
		printf("Item Inserted\n");
	}
}

void delete()
{
	struct Node *ptr;
	if(front==NULL)
		printf("Underflow\n");
	else
	{
		ptr=front;
		front=front->next;
		free(ptr);
	}

}
void display()
{
	struct Node *ptr;
	if(front==NULL)
		printf("Queue Empty\n");
	else
	{
		ptr=front;
		printf("Printing Values..\n");
		while(ptr != NULL)
		{
			printf("%d\n",ptr->data);
			ptr=ptr->next;
		}
	}
}
