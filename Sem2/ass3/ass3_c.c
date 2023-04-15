#include <stdio.h>
#define MAX 100
#define num 5

struct student
{
    char roll_num[MAX];
    char Name[MAX];
    float phy_marks;
    float maths_marks;
    float chem_marks;
}marks[num];

void print_data(){
    for (int i = 0; i < num; i++)
    {
        printf("Student %d:\n Name: %s", i + 1, marks[i].Name);
        printf("\n Roll Number: %s", marks[i].roll_num);
        float percentage = (marks[i].phy_marks + marks[i].chem_marks + marks[i].maths_marks) / 3;
        printf("\n Percentage scored: %.2f%%",percentage);
        printf("\n");
    }
}

int main()
{
    for (int i = 0; i < num; i++)
    {
        printf("Enter the details and marks of Student %d\n", i + 1);
        printf("Name: ");
        scanf("%[^\n]s",&marks[i].Name);
        fflush(stdin);

        printf("Roll Number: ");
        scanf("%s",&marks[i].roll_num);

        printf("Physics Marks: ");
        scanf("%f",&marks[i].phy_marks);

        printf("Chemistry Marks: ");
        scanf("%f",&marks[i].chem_marks);

        printf("Mathematics Marks: ");
        scanf("%f",&marks[i].maths_marks);
        fflush(stdin);
        
        printf("\n");
    }
    print_data();      
    return 0;
}