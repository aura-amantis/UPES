/* Code to implement Binary Search Tree (BST) using a Linked List and perform 
Inorder, Preorder, and Postorder Traversal. */

#include <stdio.h>
#include <stdlib.h>

struct tree{
	int element;
	struct tree *rchild;
	struct tree *lchild;
}*ptr=NULL,*root=NULL;

struct tree* create(int x);
struct tree* insert(struct tree *root,int x);
void inorder(struct tree *root);
void preorder(struct tree *root);
void postorder(struct tree *root);

int main(){
	int choice,element;
	L1:printf("1:Insert , 2:Inorder Traversal , 3:Preorder Traversal , 4:Postorder Traversal , Any:Exit\nEnter your choice: ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("\nEnter the element to be inserted: ");
			scanf("%d",&element);
			if(root==NULL) root = create(element);
			else insert(root,element);
			printf("Element Inserted...\n");
			break;
		case 2:
			printf("Inorder traversal of the tree is: ");
			inorder(root);
			break;
		case 3:
			printf("\nPreorder Traversal of the tree is: ");
			if(root==NULL) printf("\nTree is Empty");
			else preorder(root);
			break;
		case 4:
			printf("\nPostorder traversal of the tree is: ");
			if(root==NULL) printf("\nTree is Empty");
			else postorder(root);
		default:
			printf("\nProgram Closed...\n");
			exit(EXIT_SUCCESS);
	}
	goto L1;
	return 0;
}

struct tree *create(int x){
	ptr = malloc(sizeof(struct tree));
	ptr->element = x;
	ptr->lchild = NULL;
	ptr->rchild = NULL;
	
	return ptr;
}

struct tree *insert(struct tree *root, int x){
	if(root==NULL) return create(x);
	else if(x>root->element)
		root->rchild=insert(root->rchild,x);
	else root->lchild = insert(root->lchild,x);
	return root;
}

void inorder(struct tree *root){
	if(root!=NULL){
		inorder(root->lchild);
		printf("|%d| ",root->element);
		inorder(root->rchild);
	}
}

void preorder(struct tree *root){
	if(root!=NULL){
		printf("|%d| ",root->element);
		preorder(root->lchild);
		preorder(root->rchild);
	}
}

void postorder(struct tree *root){
	if(root!=NULL){
		postorder(root->lchild);
		postorder(root->rchild);
		printf("|%d|" ,root->element);
	}
}
