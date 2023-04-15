#include<stdio.h>
#define MAX 100
#define num 5

struct student
{
    char age[MAX];
    char name[MAX];
    char roll_num[MAX];
    char address[MAX];
};

void print_data(struct student s[]){
    for (int i = 0; i < num; i++)
    {
        printf("Student %d:\n Name: %s",i+1,s[i].name);
        printf(" Age: %s",s[i].age);
        printf(" Roll Number: %s",s[i].roll_num);
        printf(" Address: %s",s[i].address);
    }
}

int main() {
    struct student s[5];
    printf("Enter the details of %d students\n",num);
    for (int i = 0; i < num; i++)
    {
        printf("Enter the details of Student %d\n",i+1);
        printf("Name: ");
        fgets(s[i].name, MAX , stdin);
        printf("Age: ");
        fgets(s[i].age, MAX , stdin);
        printf("Roll Number: ");
        fgets(s[i].roll_num, MAX , stdin);
        printf("Address: ");
        fgets(s[i].address, MAX , stdin);
        printf("\n");
    }
    print_data(s);
return 0;
}