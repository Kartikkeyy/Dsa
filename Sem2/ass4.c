// ASSIGNMENT 4
// implement the algorithm to recognize the string of the format wcwr by using stack.
// ex :abcba, aabcbaa

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char stack1[100];
char str[100];
int top=0;

void push(char data){
    top++;
    stack1[top]=data;
}
char pop(){
    char out=stack1[top];
    top--;
    return out;
}
int main(){
    stack1[top]='c';
    printf("Enter Your string: ");    
    gets(str);
    int i=0;
    while(str[i]!='c'){
        if(str[i]==' '){
            printf("\nINVALID STRING");
            exit(0);
        }
        else{
            push(str[i]);         
        }
        i++;
    }
    i++;
    while(str[i]!=' '){           
        char x,y;
        x=str[i];
        y=pop();
        if(x!=y){
            printf("\nINVALID STRING");
            exit(0);
        }
        i++;
    }
    if(i==strlen(str)-1){
        printf("\nVALID STRING");
    }
    else printf("\nINVALID STRING");
}

