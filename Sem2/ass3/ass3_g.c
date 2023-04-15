#include <stdio.h>

struct struct_example
{
  int s1;
  int s2;
}s;

union union_example
{
  int u1;
  int u2;
}u;

int main()
{
    //difference one
    printf("The Size of student1 Structure = %d\n", sizeof(s));  
    printf("The Size of student2 Union = %d\n", sizeof(u));
    
    //difference two
    s.s1 = 10;   
    s.s2 = 20;
    u.u1 = 30;
    u.u2 = 40;          
    printf("value of s1 is %d\nValue of s2 is %d\nValue of u1 is %d\nValue of u2 is %d",s.s1,s.s2,u.u1,u.u2);
    return 0;
}