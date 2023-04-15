#include <stdio.h>

int f=0,r=-1,maxsize=0;

void enqueue(int queue[],int n)
{
       for(int i=r;i>=0;i--)
       {
           queue[i+1]=queue[i];
       }

       printf("element %d inserted\n", n);
       queue[f]=n;
       r++;
}

int delqueue(int queue[])
{
   if(r==-1)
   {
       printf("Queue Underflow\n");
       return -1;
   }
   else{
       printf("%d : deleted from queue\n", queue[r]);
   return queue[r--];
   }
}

void display(int queue[])
{
    for(int i=r;i>=f;i--)
    {
        printf("%d \n",queue[i]);
    }
    printf("\n");
}

int main()
{
    printf("Enter maximum Size : ");
    scanf("%d",&maxsize);
    int queue[maxsize];
    int n,x;
    while(n!=4)
    {
        printf("Enter your choice:\n 1--> Enqueue  2--> Dequeue 3--> Display 4--> Exit \n");
        printf("Please Enter Your Choice : ");   
        scanf("%d",&n);
        switch (n)
        {
        case 1:
            if(r>=maxsize-1){
              printf("Queue Overflow\n");
              break;
            }
            printf("Enter the element you want to insert : ");
            scanf("%d",&x);
            enqueue(queue,x);
            break;

        case 2:
            x=delqueue(queue);
            break;    
        
        case 3:
            display(queue);
            break;

        case 4:
            break;
        default:
            printf("\nPlease enter Valid choice\n");
            
    }
}
   return 0;
}