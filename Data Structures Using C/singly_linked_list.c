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
	struct Node *ptr;
	int item;

	ptr=(struct Node*)malloc(sizeof(struct Node*));

	if(ptr==NULL)
		printf("Not Enough Memory\n");
	else
	{
		printf("\nEnter the value of item: ");
		scanf("%d",&item);
		ptr->data=item;
		ptr->next=head;
		head=ptr;
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
		ptr->next=NULL;

		if(head == NULL)
		{
			ptr->next=head;
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
			printf("Node Inserted\n");
			display();
		}

	}
}
void randomInsert()
{
	int item,loc;
	struct Node *ptr,*temp;

	ptr = (struct Node*)malloc(sizeof(struct Node*));

	if(ptr == NULL)
		printf("Memory  Not allocated\n");
	else
	{
		printf("Enter the value of item : ");
		scanf("%d",&item);

		ptr->data=item;

		printf("\nEnter the location of the node after which you want to perform Insertion: ");  
		scanf("%d",&loc);

		temp=head;
		for (int i = 2; i < loc; i++)
		{
			temp=temp->next;
			if(temp == NULL)
			{
				printf("Cant Insert\n");
				return;
			}
		}
		ptr->next=temp->next;
		temp->next=ptr;

		printf("Node Inserted at %d\n",loc+1);
		display();
	}

}

void begin_delete()
{
	struct Node *ptr;
	if(head == NULL)
		printf("No Element to Delete\n");
	else
	{
		ptr=head;
		head=head->next;
		free(ptr);
		printf("Node Deleted\n");
		display();
	}
}

void last_delete()
{
	struct Node *ptr,*second_last;
	if (head == NULL)
	{
		printf("Empty linked List\n");
	}
	else if(head->next == NULL)
	{
		head=NULL;
		free(head);
		printf("only node Deleted\n");
	}
	else
	{
		ptr=head;
		while(ptr->next != NULL)
		{
			second_last=ptr;
			ptr=ptr->next;
		}
		second_last->next=NULL;
		free(ptr);
		printf("\nDeleted Node from the last ...\n");  
	}
}
void random_delete()
{
	struct Node *ptr,*second_last;
	int loc,i;

	if(head == NULL)
	{
		printf("Empty Linked List\n");
	}
	else
	{
		printf("\nEnter the location of the node  which you want to perform Deletion : ");  
    	scanf("%d",&loc); 

    	ptr=head;
    	for (int i = 2; i <= loc; i++)
    	{
    		second_last=ptr;
    		ptr=ptr->next;

    		if(ptr==NULL)
    		{
    			printf("\nThere are less than %d elements in the list..",loc);  
                return;  
    		}

    	} 
    	second_last->next=ptr->next;
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
	if(head==NULL)
		printf("Nothing to print\n");
	else
	{
		printf("Elements of linked list are :\n\n");
		ptr=head;
		while(ptr != NULL)
		{
			printf("%d ",ptr->data);
			ptr=ptr->next;
		}
	}
}
