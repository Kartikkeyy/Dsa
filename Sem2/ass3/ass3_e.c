#include<stdio.h>

struct details
{
    char Name[100];
    struct DOB
    {
        int day;
        char month[100];
        int year;
    }dob;
}p1;

void print_details(){
    printf("My details");
    printf("\nName: %s",p1.Name);
    printf("\nDay: %d",p1.dob.day);
    printf("\nMonth: %s",p1.dob.month);
    printf("\nYear: %d",p1.dob.year);
}

int main() {
    printf("Enter the Name: ");
    scanf("%[^\n]s",&p1.Name);

    printf("Enter the Date of Birth\n");
    printf("Day: ");
    scanf("%d",&p1.dob.day);

    printf("Month: ");
    scanf("%s",&p1.dob.month);

    printf("Year: ");
    scanf("%d",&p1.dob.year);
    
    print_details();
return 0;
}