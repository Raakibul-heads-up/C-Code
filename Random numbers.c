#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, num;

  printf("Ten random numbers in [1,300]\n");

  for (i = 1; i <= 300; i++) {
    num = rand() % 300 + 1;
    printf("%d\n", num);
  }

  return 0;
}
