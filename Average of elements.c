#include<stdio.h>
int main()
{
    int num[100],sum = 0,num1,i;

    printf("What Number Do You Want :\n");
    scanf("%d",&num1);

    for(i=0;i<num1;i++)
    {
        printf("Number[%d]=",i);
        scanf("%d",&num[i]);
    }
     printf("\n\n");

     for(i=0;i<num1;i++)
     {
         sum = sum + num[i];
     }
     printf("The sum is =%d\n",sum);

     printf("Average is = %.3f\n", (float)sum/num1);

     printf("\n\n");

     return main();
}
