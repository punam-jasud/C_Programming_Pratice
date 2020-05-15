#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};
struct Node *head;

void beginsert();
void lastinsert();
void begin_delete();
void last_delete();
void search();
void display();

 int main(int argc,char const *argv[])
{
	int ch;
	while(ch != 9)
	{
		printf("\n\n\n********Menu**********\n\n");
		printf("1.Insert at Begining\n2.Insert at End\n3.Delete from Begining\n4.last_delete\n5.Search Element\n6.Display List\n7.Exit\n\n");
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
					begin_delete();
					break;
			case 4:
					last_delete();
					break;
			case 5:
					search();
					break;
			case 6:
					display();
					break;
			case 7:
					exit(0);
			default:
					printf("Wrong Selection\n");
		}
	}	
	return 0;
}

void beginsert()
{
	struct Node *ptr,*temp;
	int item;

	ptr=(struct Node*)malloc(sizeof(struct Node*));

	if(ptr==NULL)
		printf("Not Enough Memory\n");
	else
	{
		printf("\nEnter the value of item: ");
		scanf("%d",&item);
		ptr->data=item;
		
		if(head==NULL)
		{
			head=ptr;
			ptr->next=head;
		}
		else
		{
			temp=head;
			while(temp->next != head)
			{
				temp=temp->next;
			}
			temp->next=ptr;
			ptr->next=head;
			head=ptr;
		}
		printf("Node Inserted\n");
		display();
		
	}
}

void lastinsert()
{
	struct Node *ptr,*temp;
	int item;
	ptr=(struct Node*)malloc(sizeof(struct node*));

	if(ptr==NULL)
		printf("Not Enough Memory\n");
	else
	{
		printf("Enter value of item: ");
		scanf("%d",&item);
		ptr->data=item;

		if(head == NULL)
		{
			head=ptr;
			ptr->next=head;
		}
		else
		{
			temp=head;
			while(temp->next != head)
			{
				temp=temp->next;
			}
			temp->next=ptr;
			ptr->next=head;
			printf("Node Inserted\n");
			display();
		}

	}
}

void begin_delete()
{
	struct Node *ptr;
	if(head == NULL)
		printf("No Element to Delete\n");
	else
	{
		if(head->next==head)
		{
			head=NULL;
			free(head);
		}
		else
		{
			ptr=head;
			while(ptr->next !=head)
			{
				ptr=ptr->next;
			}
			ptr->next=head->next;
			free(head);
			head=ptr->next;
		}
		printf("Node Deleted\n");
		display();
	}
}

void last_delete()
{
	struct Node *ptr,*preptr;
	if(head == NULL)
		printf("No Element to Delete\n");
	else
	{
		if(head->next==head)
		{
			head=NULL;
			free(head);
		}
		else
		{
			ptr=head;
			while(ptr->next !=head)
			{
				preptr=ptr;
				ptr=ptr->next;
			}
			preptr->next=ptr->next;
			free(ptr);
		}
		printf("Node Deleted\n");
		display();
	}
}

void search()
{
	struct Node *ptr;
	int flag=1,i=0,item;
	if(head==NULL)
		printf("Empty list\n");
	else
	{
		printf("Enter item to search : ");
		scanf("%d",&item);

		if(head->data==item)
		{
			printf("Item Found at Location %d\n",i+1);
			flag=0;
		}
		else
		{
			ptr=head;
			while(ptr->next != head)
			{
				if(ptr->data == item)
				{
					printf("Item Found at Location %d\n",i+1);
					flag=0;
					break;
				}
				else
				{
					flag=1;
				}
				ptr=ptr->next;
				i++;
			}

		}
		if(flag == 1)
		{
			printf("Item not Found\n");
		}

	}
}

void display()
{
	struct Node *ptr;
	if(head==NULL)
		printf("Nothing to print\n");
	else
	{
		ptr=head;
		while(ptr->next != head)
		{
			printf("%d ",ptr->data);
			ptr=ptr->next;
		}
		printf("%d ",ptr->data);

	}
}
