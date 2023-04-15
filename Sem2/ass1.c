/*Write a C program for the below implementation operations on an array.
 Insert
 Delete
 Update
 Search
 Traverse*/

#include<stdio.h>
#include<conio.h>

void insert(int arr[], int n)  
{
    int p;
    printf("\nEnter value to be inserted :");  
    scanf("%d", &p); 
    arr[n-1] = p; 
}

int delete(int arr[],int n){
    int k;
    printf("Enter the number you wanted to be deleted: ");
    scanf("%d",&k);
    int flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            n--;
            for(i;i<n;i++){
                arr[i]=arr[i+1];
            }
            flag=1;
        break;
        }
    }
    if(flag==0){
        printf("Entered no. not found:\n");
    }
        return n;
}

void update(int arr[],int n){
    int i,k;
    printf("Enter the index to be updated: ");
    scanf("%d",&i);
    printf("Enter the value to be updated: ");
    scanf("%d",&k);
    if(i>=0 && i<n){
        arr[i]=k;
    }
}

int search(int arr[],int n){
    int k,mark;
    printf("Enter the number you want to search: ");
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            mark=i;
        }
    }
    printf("%d is the index value\n",mark);
}

void traverse(int arr[],int n){
    printf("Your traversed list is : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int n;
    printf("Enter the size of array you want to made: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array: ");
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        arr[i]=a;
    }
    int N;
    while(N!=6){
    printf("*1. Insert\n*2. Delete\n*3. Update\n*4. Search\n*5. Traverse\n*6. Exit\nEnter the operation you want to perform: ");
    scanf("%d",&N);
    switch(N){
        case 1:
        n++;
        insert(arr,n);
        break;
        case 2:
        n=delete(arr,n);
        break;
        case 3:
        update(arr,n);
        break;
        case 4:
        search(arr,n);
        break;
        case 5:
        traverse(arr,n);
        break;
        case 6:
        return 0;
        default:
        printf("Invalid input\n");
        break;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    }
}