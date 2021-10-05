
#include <stdio.h>

int main(void)
{
   int num1, num2, error;

   printf("Please input two positive integers\n");
   //scanning two integers values
   error = scanf("%d %d", &num1, &num2);
   //error carries the value of number of inputs
   if (error != 2)
   {
      //if input given is more than 2 numbers the block will be executed and the text will be printed
      printf("Please try again\n");
      return 1;
   }
   //check if num1 and num2 are less than or equal 0 (or positive)
   if (num1 <= 0 || num2 <= 0)
   {
      printf("These numbers are not positive!\n");
      return 1;
   }

   //check if the num1 & num2 is even or odd and print respectively
   printf(" You entered %d and %d\n", num1, num2);
   if (num1 % 2 == 0)
   {
      printf(" num1 is even and");
   }
   else
   {
      printf(" num1 is odd and");
   }

   if (num2 % 2 == 0)
   {
      printf(" num2 is even\n");
   }
   else
   {
      printf(" num2 is odd\n");
   }
   printf("\n");

   return 0;
}
