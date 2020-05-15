#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *prev;
	struct Node *next;
};
struct Node *head=NULL;

void beginsert();
void lastinsert();
void randomInsert();
void begin_delete();
void last_delete();
void random_delete();
void search();
void display();

 int main(int argc, char const *argv[])
{
	int ch;
	while(ch != 9)
	{
		printf("\n\n\n********Menu**********\n\n");
		printf("1.Insert at Begining\n2.Insert at End\n3.Insert at Random\n4.Delete from Begining\n5.last_delete\n6.Random Deletion\n7.Search Element\n8.Display List\n9.Exit\n\n");
		printf("Enter Your Choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
					beginsert();
					break;
			case 2:
					lastinsert();
					break;
			case 3:
					randomInsert();
					break;
			case 4:
					begin_delete();
					break;
			case 5:
					last_delete();
					break;
			case 6:
					random_delete();
					break;
			case 7:
					search();
					break;
			case 8:
					display();
					break;
			case 9:
					exit(0);
			default:
					printf("Wrong Selection\n");
		}
	}	
	return 0;
}

void beginsert()
{
	struct Node*ptr;
	int item;
	ptr= (struct Node*)malloc(sizeof(struct Node*)) ;

	if(ptr == NULL)
		printf("Memory not allocated\n");
	else
	{
		printf("Enter value of Item: ");
		scanf("%d",&item);
		ptr->data=item;

		if(head==NULL)
		{
			ptr->next=NULL;
			ptr->prev=NULL;
			head=ptr;
		}
		else
		{
			ptr->next=head;
			ptr->prev=NULL;
			head->prev=ptr;
			head=ptr;
		}
		printf("\nNode inserted\n");
		display();
	}
}
void lastinsert()
{
	struct Node*ptr,*temp;
	int item;
	ptr= (struct Node*)malloc(sizeof(struct Node*)) ;

	if(ptr == NULL)
		printf("Memory not allocated\n");
	else
	{
		printf("Enter value of Item: ");
		scanf("%d",&item);
		ptr->data=item;

		if(head==NULL)
		{
			ptr->next=NULL;
			ptr->prev=NULL;
			head=ptr;
		}
		else
		{
			temp=head;
			while(temp->next != NULL)
			{
				temp=temp->next;
			}
			temp->next=ptr;
			ptr->next=NULL;
			ptr->prev=temp;

		}
		printf("\nNode inserted\n");
		display();
	}
}
void randomInsert()
{
	struct Node *ptr,*temp;
	int item,i,loc;
	ptr= (struct Node*)malloc(sizeof(struct Node*)) ;

	if(ptr == NULL)
		printf("Memory not allocated\n");
	else
	{
		printf("Enter value of Item: ");
		scanf("%d",&item);
		ptr->data=item;

		printf("Enter the location : ");
		scanf("%d",&loc);

		temp=head;
		for(i=0;i<loc;i++)
		{
			temp=temp->next;
			if(temp == NULL)
			{
				printf("Cant Insert\n");
				return;
			}

		}
		ptr->next=temp->next;
		ptr->prev=temp;
		temp->next=ptr;
		temp->next->prev=ptr;
		
	}

	printf("\nNode inserted\n");
	display();
	
}

void begin_delete()
{
	struct Node *ptr;
	if(head == NULL)
	{
		printf("Underflow\n");
	}
	else if(head->next = NULL)
	{
		head=NULL;
		free(head);
		printf("Node Deleted\n");
		display();
	}
	else
	{
		ptr=head;
		head=head->next;
		head->prev=NULL;
		free(ptr);
		printf("Node Deleted\n");
		
	}
	
}

void last_delete()
{
	struct Node *ptr;
	if(head == NULL)
	{
		printf("Underflow\n");
	}
	else if(head->next = NULL)
	{
		head=NULL;
		free(head);
		printf("Node Deleted\n");
		display();
	}
	else
	{
		ptr=head;
		while(ptr->next != NULL)
		{
			ptr=ptr->next;
		}
		ptr->prev->next=NULL;
		free(ptr);
		printf("Node Deleted\n");
		
	}
	
}
void random_delete()
{
	struct Node *temp,*ptr;
	int val;
	printf("Enter value : ");
	scanf("%d",&val);

	temp = head;
	while(temp->next->data != val)
	{
		temp=temp->next;
	}
	if(temp->next == NULL)
	{
		printf("Cant Delete\n");
	}
	else if(temp->next->next == NULL)
	{
		temp->next = NULL;
		printf("Node Deleted\n");
	}
	else
	{
		ptr = temp->next;
		temp->next=ptr->next;
		ptr->next->prev=temp;
		free(ptr);
		printf("Node Deleted\n");
	}
}
void search()
{
	struct Node *ptr;
	int flag=0,i=0,item;
	if(head==NULL)
		printf("Empty list\n");
	else
	{
		printf("Enter item to search : ");
		scanf("%d",&item);

		ptr=head;
		while(ptr != NULL)
		{
			if(ptr->data == item)
			{
				printf("Item Found at Location %d\n",i+1);
				return;
			}
			ptr=ptr->next;
			i++;
		}
		if(flag == 0)
		{
			printf("Item not Found\n");
		}

	}
}

void display()
{
	struct Node *ptr;

	if(head == NULL)
		printf("Empty Linked List\n");
	else
	{
		ptr=head;
		while(ptr != NULL)
		{
			printf("%d ",ptr->data);
			ptr=ptr->next;
		}
	}

}
