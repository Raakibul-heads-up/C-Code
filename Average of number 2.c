#include<stdio.h>
int main()
{
    int A[100],num,i,sum=0;

    printf("what number do you want :\n");
    scanf("%d",&num);

    printf("Enter number :\n");
    for(i=0;i<num;i++)
    {
        printf("Number [%d]= ",i);
        scanf("%d",&A[i]);
    }
    printf("\n");

  for(i=0;i<num;i++)
  {
      sum = sum +A[i];
  }
  printf("\nSum = %d\n",sum);
  printf("Average = %.3f",(float)sum/num);


  printf("\n\n");

  return main();
}
