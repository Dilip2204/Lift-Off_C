#include <stdio.h>
int main()
{
   int a, sum = 0, r;

   printf("Enter a number\n");

   for (scanf("%d", &a); a != 0; a = a/10) {
      r = a % 10;
      sum = sum + r;
   }

   printf("Sum of digits of entered number = %d\n", sum);

   return 0;
}