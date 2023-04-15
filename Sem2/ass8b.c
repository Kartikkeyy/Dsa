#include <stdio.h>
// #include<malloc.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

struct node *searchIter(struct node *root, int key)
{
    while (root != NULL)
    {
        if (key == root->data)
        {
            return root;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return NULL;
}

void insert(struct node *root, int key)
{
    struct node *prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (key == root->data)
        {
            printf("Cannot insert %d, already in BST", key);
            return;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }

    struct node *new = createNode(key);

    if (key < prev->data)
    {
        prev->left = new;
    }
    else
    {
        prev->right = new;
    }
}

struct node *inOrderPredecessor(struct node *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

struct node *deleteNode(struct node *root, int value)
{

    struct node *iPre;
    if (root == NULL)
    {
        return NULL;
    }

    if (root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }

    if (value < root->data)
    {
        root->left = deleteNode(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = deleteNode(root->right, value);
    }
    else
    {
        iPre = inOrderPredecessor(root);
        root->data = iPre->data;
        root->left = deleteNode(root->left, iPre->data);
    }
    return root;
}

int main()
{
    int f, s;
    printf("Enter fist value for tree : ");
    scanf("%d", &f);
    printf("\n");

    struct node *p = createNode(f);
    inOrder(p);

    while (1)
    {
        int t;
        printf("To enter next value press 1 else press any other key : \n");
        scanf("%d", &t);
        printf("\n");

        if (t == 1)
        {
            printf("enter next value \n");
            scanf("%d", &s);
            insert(p, s);
            inOrder(p);
            printf("\n");
        }
        else
        {
            break;
        }
    }

    while (1)
    {
        printf("\nFor insertion press 1\nFor deletion press 2\nFor search in BST press 3\nFor exit press 4");
        printf("ENTER VALUE : ");
        scanf("%d", &s);
        printf("\n");

        if (s == 4)
        {
            break;
        }

        switch (s)
        {
        case 1:
            printf("enter next value : ");
            scanf("%d", &f);
            printf("\n");
            insert(p, f);
            inOrder(p);
            printf("\n");
            break;

        case 2:
            printf("enter value :");
            scanf("%d", &f);
            printf("\n");
            if (searchIter(p, f) != NULL)
            {
                deleteNode(p, f);
            }
            else
            {
                printf("ELEMENT CANNOT BE FOUND\n");
            }
            inOrder(p);
            printf("\n");
            break;

        case 3:
            printf("enter value \n");
            scanf("%d", &f);
            if (searchIter(p, f) == NULL)
            {
                printf("ELEMENT IS NOT PRESENT\n");
            }
            else
            {
                printf("ELEMENT IS PRESENT\n");
                inOrder(p);
                printf("\n");
            }
            break;

        default:
            break;
        }
    }

    return 0;
}