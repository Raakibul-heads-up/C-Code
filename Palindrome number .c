#include <stdio.h>

int main()
{
   int num, reverse = 0, t;

   printf("Enter a number to check if it is a palindrome or not\n");
   scanf("%d", &num);

   t = num;

   while (t != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + t%10;
      t = t/10;
   }

   if (num == reverse)
      printf("%d is a palindrome number.\n", num);
   else
      printf("%d isn't a palindrome number.\n", num);

   return main();
}


