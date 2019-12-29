#include <stdio.h>

int main()
{
   int i, first, last, middle, num, search, A[100];

   printf("Enter number of elements\n");
   scanf("%d",&num);

   printf("Enter %d integers\n", num);

   for (i= 0; i<num;i++)
      scanf("%d",&A[i]);

   printf("Enter value to find\n");
   scanf("%d", &search);

   first = 0;
   last = num - 1;
   middle = (first+last)/2;

   while (first <= last) {
      if (A[middle] < search)
         first = middle + 1;
      else if (A[middle] == search) {
         printf("%d found at location %d.\n", search, middle+1);
         break;
      }
      else
         last = middle - 1;

      middle = (first + last)/2;
   }
   if (first > last)
      printf("Not found! %d isn't present in the list.\n", search);

   return main();
}


