#include<stdio.h>
#include<conio.h>

int stack[100],k=-1;
void pop(){
    if(k==-1){
        printf("\n**Stack Underflowed Push or Exit the Stack**\n");
    }
    else{
        printf("\nPoped out element is: %d\n",stack[k]);
        k--;
    }
}

void push(int m,int n){
    if(k>=n-1){
        printf("\n**Stack Overflowed Pop or Exit the Stack**\n");
    }
    else{
        ++k;
        stack[k]=m;
    }
}
void display(){
    printf("STACK: \n");
    for(int i=k;i>-1;i--){
        printf("%d \n",stack[i]);
    }
}
int main(){
    int n,N,m;
    printf("\nEnter the size of your stack: ");
    scanf("%d",&n);
    while(N!=4){
    printf("\n1.Pop\n2.Push\n3.Display\n4.Exit\n\nEnter your choice: 1/2/3 or 4: ");
    scanf("%d",&N);
    switch(N){
        case 1: //pop
        pop();
        break;

        case 2: //push
        printf("\nEnter the value you want to add in the stack: ");
        scanf("%d",&m);
        push(m,n);
        break;

        case 3: //display
        display();
        break;

        case 4:
        printf("\n***Operation Closed***\n");
        return 0;

        default:
        printf("*\tInvalid Input Stack Closed*\n");
        break;
    }
    }
}