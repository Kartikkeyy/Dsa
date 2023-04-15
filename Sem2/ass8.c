#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* create_node(int data){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=0;
    newnode->right=0;
    return newnode;
}

struct node* search(struct node* root, int key){
    while(root != NULL){
        if(root->data == key){
            printf("Root found");
            return root;
        }
        else if(key< root->data){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    if(root == NULL){
        printf("Root not found");
    }
}

struct node* minValueNode(struct node* node){
    struct node* current = node;

    while(current && current->left != NULL){
        current = current->left;
    }
    return current;
}

struct node* delete(struct node* root, int key){
    if(root == NULL){
        return root;
    }
    if(key < root->data){
        root->left = delete(root->left, key);
    }
    else if(key > root->data){
        root->right = delete(root->right, key);
    }
    else{
        if(root->left == NULL){
            struct node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
            struct node* temp = root->left;
            free(root);
            return temp;
        }
        struct node* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = delete(root->right, temp->data);
    }
    return root;
}

void insert(struct node* root, int key){
    struct node* prev;
    while(root != NULL){
        prev = root;
        if(key < root->data){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    struct node* new = create_node(key);
    if(key < prev->data){
        prev->left = new;
    }
    else{
        prev->right = new;
    }
}

void inorder(struct node* root){
    if(root==0){
        return;
    }
    else{
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main(){

    struct node* p1 = NULL;

    int choice, key, value, node_no;
    printf("\nEnter no. of nodes for implementing binary tree: ");
    scanf("%d",&node_no);
    int v[node_no];
    for(int i=0; i<node_no; i++){
        printf("\nEnter the value of node %d = ", i+1);
        scanf("%d", &v[i]);
        if(i==0 && p1 == NULL){
            p1 = create_node(v[i]);
        }
        else{
            insert(p1, v[i]);
        }
    }

cont:
    printf("\n1: Search\n2: Insert\n3: Delete\n4: Inorder Traversal\n5: Exit\nEnter Choice: ");
    scanf("%d",&choice);

        switch (choice){
        case 1:
            printf("Enter the node value to search for: ");
            scanf("%d",&key);
            printf("Search of node: ");
            search(p1, key);
            goto cont;
            break;

        case 2:
            printf("Enter the node value to insert: ");
            scanf("%d",&value);
            insert(p1, value);
            goto cont;
            break;

        case 3:
            printf("Enter the node value to delete: ");
            scanf("%d",&value);
            delete(p1, value);
            goto cont;
            break;

        case 4 :
            printf("Inorder Traversal: ");
            inorder(p1);
            goto cont;
            break;

        case 5:
            printf("Exit");
            break;
        }
    return 0;
}