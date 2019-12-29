#include <stdio.h>

int main()
{
  int A[100], search, i, num;

  printf("Enter number of elements in array\n");
  scanf("%d", &num);

  printf("Enter %d integer(s)\n", num);

  for (i = 0; i < num; i++)
    scanf("%d", &A[i]);

  printf("Enter a number to search\n");
  scanf("%d", &search);

  for (i = 0; i < num; i++)
  {
    if (A[i] == search)    /* If required element is found */
    {
      printf("%d is present at location %d.\n", search, i+1);
      break;
    }
  }
  if (i == num)
    printf("%d isn't present in the array.\n", search);

  return main();
}
