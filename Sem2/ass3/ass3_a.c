#include<stdio.h>

struct student
{
    char name[50];
    char roll_num[20];
};

void dot_operator(struct student s){
    struct student *ptr;
    ptr = &s;
    printf("\nDisplaying the output using the dot operator\n");
    printf("Name of the student: %s\n",(*ptr).name);
    printf("Roll number of the student: %s\n",(*ptr).roll_num);
}

void arrow_operator(struct student s){
    struct student *ptr;
    ptr = &s;
    printf("\nDisplaying the output using the arrow operator\n");
    printf("Name of the student: %s\n",ptr->name);
    printf("Roll number of the student: %s\n",ptr->roll_num);
}

int main() {
    struct student s1;
    printf("Enter the name of the student: ");
    scanf("%[^\n]s",s1.name);
    printf("Enter the Roll number of the student: ");
    scanf("%s",s1.roll_num);
    dot_operator(s1);
    arrow_operator(s1);
return 0;
}