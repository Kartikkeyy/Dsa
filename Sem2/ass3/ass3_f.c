#include<stdio.h>
#include<string.h>

char name[100],home_add[100],hostel_add[100],city[50],state[50],zip[20];

union details
{
    char name[100];
    char home_address[200];
    char hostel_address[200];
    char city[100];
    char state[100];
    char zip[100];
}current;

void print_details(){
    printf("\n\nName: %s",name);
    printf("\nCity: %s",city);
    printf("\nState: %s",state);
    printf("\nZip: %s",zip);
    printf("\nHostel Address: %s",hostel_add);
    printf("\nHome Address: %s",home_add);
}
int main() {
    printf("Enter the details");
    printf("\nName: ");
    scanf("%[^\n]s",&current.name);
    strcpy(name,current.name);

    printf("City: ");
    scanf("%s",&current.city);
    strcpy(city,current.city);
    fflush(stdin);

    printf("State: ");
    scanf("%[^\n]s",&current.state);
    strcpy(state,current.state);

    printf("Zip: ");
    scanf("%s",&current.zip);
    strcpy(zip,current.zip);

    fflush(stdin);
    printf("Hostel address: ");
    scanf("%[^\n]s",&current.hostel_address);
    strcpy(hostel_add,current.hostel_address);

    fflush(stdin);
    printf("Home address: ");
    scanf("%[^\n]s",&current.home_address);
    strcpy(home_add,current.home_address);

    print_details();
return 0;
}