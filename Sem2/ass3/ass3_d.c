#include <stdio.h>

struct dist {
   int feet;
   float inch;
} distance1, distance2, result;

int main() {

   printf("Enter 1st distance\n");
   printf("Feets covered: ");
   scanf("%d", &distance1.feet);
   printf("inches covered: ");
   scanf("%f", &distance1.inch);

   printf("\nEnter 2nd distance\n");
   printf("Feets covered: ");
   scanf("%d", &distance2.feet);
   printf("inches covered: ");
   scanf("%f", &distance2.inch);
   
   result.feet = distance1.feet + distance2.feet;
   result.inch = distance1.inch + distance2.inch;

   while (result.inch >= 12.0) {
      result.inch = result.inch - 12.0;
      ++result.feet;
   }
   printf("\nSum of distances = %d feets and %.1f inches ", result.feet, result.inch);
   return 0;
}