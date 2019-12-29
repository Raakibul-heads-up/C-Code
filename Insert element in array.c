#include <stdio.h>

int main()
{
   int A[100], position, i, num, value;

   printf("Enter number of elements in array\n");
   scanf("%d",&num);

   printf("Enter %d elements\n", num);

   for (i= 0; i< num; i++)
      scanf("%d",&A[i]);

   printf("Enter the location where you wish to insert an element\n");
   scanf("%d",&position);

   printf("Enter the value to insert\n");
   scanf("%d", &value);

   for (i = num - 1; i >= position - 1; i--)
       A[i+1] = A[i];

   A[position-1] = value;

   printf("Resultant array is\n");

   for (i= 0; i<= num; i++)
      printf("%d\n", A[i]);

   return main();
}


