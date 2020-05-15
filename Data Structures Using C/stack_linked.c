#include <stdio.h>
#include <stdlib.h>

void push();
void pop();
void display();

struct 	Node
{
	int val;
	struct Node *next;
	
};
struct Node *head=NULL;

int main(int argc, char const *argv[])
{
	
	int ch;
	while(1)
	{

		printf("********Menu*******\n\n");
		printf("1.Push\n2.Pop\n3.Display\n4.Exit\n\n");
		printf("Enter Your Choice: ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				push();
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
				printf("Wrong Selection\n");
		}	

	}
	return 0;
}
void push()
{
	int val;
	struct Node *ptr = (struct Node*)malloc(sizeof(struct Node*));

	if(ptr == NULL)
		printf("Memory Not allocated\n");
	else
	{
		printf("Enter the value: ");
		scanf("%d",&val);
		if (head == NULL)
		{
			ptr->val = val;
			ptr->next=NULL;
			head=ptr;

		}
		else
		{
			ptr->val=val;
			ptr->next=head;
			head=ptr;
		}
		printf("Item Pushed\n");

	}
}

void pop()
{
	int item;
	struct Node *ptr;
	if(head == NULL)
		printf("stack Underflow\n");
	else
	{
		item=head->val;
		ptr=head;
		head=head->next;
		free(ptr);
		printf("Item popped\n");
	}
}
void display()
{
	struct Node *ptr;
	if(head == NULL)
		printf("stack Empty\n");
	else
	{
		printf("Printing the stack Elements\n");
		ptr=head;
		while(ptr != NULL)
		{
			printf("%d->",ptr->val);
			ptr=ptr->next;
		}
		printf("NULL\n");
	}

}
