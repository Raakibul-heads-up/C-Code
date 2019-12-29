#include<stdio.h>
int main()
{
    int a[200],sum =0,i, n;

    printf("How many numbers :");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        sum = sum + a[i];
    }

    printf("The sum is = %d",sum);

    printf("\n\n ");

    printf("The average is  = %.3f\n\n",(float )sum/n);


    return main();
}
