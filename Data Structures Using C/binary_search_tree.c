#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};
struct Node *root=NULL;

struct Node* create(int item)
{
	struct Node *ptr;
	ptr=(struct Node*)malloc(sizeof(struct Node*));

	if(ptr==NULL)
		printf("Cant Insert\n");
	else
	{
		ptr->data=item;
		ptr->left=NULL;
		ptr->right=NULL;
		return ptr;
	}
} 

struct Node* insert(struct Node* root,int item)
{
	if(root==NULL)
		return create(item);
	if(item < root->data)
		root->left = insert(root->left,item);
	else
		root->right = insert(root->right,item);

	return root;
}

void inorder(struct Node *root)
{
	if(root == NULL)
	{
		return;
	}

	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);

}

void preorder(struct Node *root)
{
	if(root == NULL)
	{
		return;
	}

	printf("%d ",root->data);
	inorder(root->left);
	inorder(root->right);

}

void postorder(struct Node *root)
{
	if(root == NULL)
	{
		return;
	}

	inorder(root->left);
	inorder(root->right);
	printf("%d ",root->data);

}

int minimum(struct Node *root)
{
	while(root->left != NULL)
	{
		root=root->left;
	}
	return root->data;
}

int maximum(struct Node *root)
{
	while(root->right != NULL)
	{
		root=root->right;
	}
	return root->data;
}

struct Node* search(struct Node* root,int item)
{
	if(root==NULL || root->data==item)
		return root;
	else if(item < root->data)
		return search(root->left,item);
	else
		return search(root->right,item);
}

void main()
{
	int ch;
	while(1)
	{
		printf("\n\n*******Menu********\n\n");
		printf("1.Insert into BST\n2.Display BST\n");
		printf("\n\nEnter your choice: ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
					root=insert(root,100);
					root=insert(root,10);
					root=insert(root,50);
					root=insert(root,60);
					root=insert(root,45);
					break;
			case 2:
					printf("\nElements of BST are : \n\n");
					inorder(root);
					break;
			case 3:
					printf("Minimum Element in tree : %d\n",minimum(root));
					break;
			case 4:
					printf("Maximum Element in tree : %d\n",maximum(root));
					break;
			case 5:
					printf("\nElements of BST using Preorder Traversal are : \n\n");
					preorder(root);
					break;
			case 6:
					printf("\nElements of BST using Postorder Traversal are : \n\n");
					postorder(root);
					break;
			case 7:
					root=search(root,45);
					if(root != NULL)
						printf("%d is Found\n",root->data);
					else
						printf("Element not Found\n");
					break;

			default:
					printf("Wrong choice\n");
		}
	}
}