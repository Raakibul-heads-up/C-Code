/* Bubble sort code */

#include <stdio.h>

int main()
{
  int A[100], num, i, j, swap;

  printf("Enter number of elements\n");
  scanf("%d", &num);

  printf("Enter %d integers\n", num);

  for (i = 0; i < num; i++)
    scanf("%d", &A[i]);

  for (i = 0 ; i< num - 1; i++)
  {
    for (j = 0 ; j < num - i - 1; j++)
    {
      if (A[j] > A[j+1]) /* For decreasing order use < */
      {
        swap       = A[j];
        A[j]   =  A[j+1];
        A[j+1] = swap;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (i = 0; i < num; i++)
     printf("%d\n", A[i]);

  return main();
}
