#include<stdio.h>
#include<malloc.h>

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};
struct Node *root;


void insert(int item)
{
	struct Node *ptr,*parentnode,*temp;
	ptr = (struct Node*)malloc(sizeof(struct Node*));
	if(ptr == NULL)
		printf("Memory Cannot Allocated\n");
	else
	{
		ptr->data = item;
		ptr->left=NULL;
		ptr->right=NULL;

		if(root == NULL)
		{
			root=ptr;
			root->left = NULL;
			root->right = NULL;
		}
		else
		{
			temp=root;
			parentnode=NULL;
			while(temp != NULL)
			{
				parentnode = temp;
				if(item < temp->data) 
					temp = temp->left;
				else
					temp = temp->right;
			}
			if(item < parentnode->data)
				parentnode->left=ptr;
			else
				parentnode->right=ptr;
		}

		printf("Node Inserted\n");

	}

}

void search(int item)
{
	int loc = 0;
	struct Node *temp;
	temp = root;
	while(temp != NULL)
	{
		loc++;
		if(temp->data == item)
		{
			printf("Item found at %d location\n",loc);
			return;
		}
		else if(item < temp->data)
		{
			temp = temp->left;
		}
		else
		{
			temp = temp->right;
		}
	}
	printf("Item Not Found\n");

}

void inorder(struct Node *root)
{
	if(root==NULL)
		return;
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
}

struct Node* findMinNode(struct Node *root)
{
	struct Node *temp = root;
	while(temp->left != NULL)
	{
		temp = temp->left;
	}
	return temp;

}

struct Node* deleteNode(struct Node *root,int item)
{
	struct Node *temp ;

	if(root == NULL)
		return root;
	else if(item < root->data)
		root->left = deleteNode(root->left,item);
	else if(item > root->data)
		root->right=deleteNode(root->right,item);
	else     //element found
	{
		// no child  - case 1
		if(root->left==NULL && root->right==NULL)
		{
			free(root);
			root=NULL;
		}
		else if(root->left == NULL)//only right child - case 2
		{
			struct Node *temp = root;
			root=root->right;
			free(temp);
		}
		else if(root->right==NULL)//only left child  - case 2
		{
			struct Node* temp = root;
			root = root->left;
			free(temp);
		}
		else //with 2 child - case 3
		{
			struct Node *temp = findMinNode(root->right);
			root->data = temp->data;
			root->right = deleteNode(root->right,temp->data);
		}
	}
	return root;

}

int main()
{
	int item,choice;
	do
	{
		printf("Enter the item that you want to insert : ");
		scanf("%d",&item);
		insert(item);
		printf("Press 0 for Inserting More Items : ");
		scanf("%d",&choice);
	}while(choice == 0);

	printf("Enter the item you want search :");
	scanf("%d",&item);
	search(item);

	printf("Displaying Tree Elements Using Inorder Traversal\n");
	inorder(root);
	printf("\n");

	printf("Enter the element you want to delete : ");
	scanf("%d",&item);
	struct Node* deltedNodeAddress = deleteNode(root,item);
	printf("Displaying Tree Elements Using Inorder Traversal After Deletion\n");
	inorder(root);
	printf("\n");
	return 0;
}













