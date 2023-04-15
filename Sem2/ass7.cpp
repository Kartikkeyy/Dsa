#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* create_node(int value){
    struct node* newnode=(struct node*) malloc(sizeof(struct node));
    newnode->data=value;
    newnode->right=0;
    newnode->left=0;
}
void preorder(struct node* root){

    if(root==0){
        return;
    }
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node* root){

    if(root==0){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}
void inorder(struct node* root){

    if(root==0){
        return;
    }
    else{
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
    }
}
void Leaf_Node(struct node* root){

    if(root==0){
        return;
    }
    else{
    Leaf_Node(root->left);
    if(root->left==0 && root->right==0){
    printf("%d ",root->data);
    }
    Leaf_Node(root->right);
    }
}
int maxDepth(struct node* root)
{
    int a,b;
	if (root == NULL)
		return 0;
	else {

		 a = maxDepth(root->left);
		 b = maxDepth(root->right);

		if (a > b)
			return (a + 1);
		else
			return (b + 1);
	}
}

int main()
{
   // struct node* p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12;
    struct node* p1=create_node(25);
    struct node* p2=create_node(20);
    struct node* p3=create_node(36);
    struct node* p4=create_node(10);
    struct node* p5=create_node(22);
    struct node* p6=create_node(30);
    struct node* p7=create_node(40);
    struct node* p8=create_node(5);
    struct node* p9=create_node(12);
    struct node* p10=create_node(28);
    struct node* p11=create_node(38);
    struct node* p12=create_node(48);
    p1->left=p2;
    p1->right=p3;
    p2->left=p4;
    p2->right=p5;
    p3->left=p6;
    p3->right=p7;
    p4->left=p8;
    p4->right=p9;
    p5->left=0;
    p5->right=0;
    p6->left=p10;
    p6->right=0;
    p7->left=p11;
    p7->right=p12;
    int choice;
    
    printf("Preorder Traversal: " );
        preorder(p1);

        printf("\n");
       printf("Postorder Traversal: " );
        postorder(p1);

        printf("\n");
      printf("Inorder Traversal: " );
        inorder(p1);

        printf("\n");

      printf("Height of Tree: %d",maxDepth(p1) );
      printf("\n");

      printf("leaf Node of Tree: " );
      printf("\n");
          Leaf_Node(p1);
          printf("\n");
        
    
     printf("Exit All Operations\n");
    
    return 0;
}