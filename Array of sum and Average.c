
#include<stdio.h>
int main()
{
    int num,A[100],i,sum =0;

    printf("What Number do you want :\n");
    scanf("%d",&num);

    printf("Number are :\n");

    for(i=0;i<num;i++)
    {
        printf("number[%d]=",i);
        scanf("%d",&A[i]);
    }
    printf("\n");

    for(i=0;i<num;i++)
    {
        sum = sum + A[i];
    }
    printf("Sum of the number = %d\n",sum);

    printf("Average = %f\n",(float)sum/num);

    printf("\n");

    return main();
}
