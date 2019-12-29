#include<stdio.h>
int main()
{
    int A[199],i,j,num,swap;

    printf("Enter number:\n ");
    scanf("%d",&num);

    printf("Elements %d are :\n",num);
    for (i=0;i<num;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<num-1;i++)
    {
        for(j=0;j<num-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                swap  = A[j];
                A[j] = A[j+1];
                A[j+1] = swap;

            }
        }
    }
    printf("Sorted list in Ascending order :\n");
    for(i=0;i<num;i++)
    {
        printf("%d\n",A[i]);
    }
    printf("\n\n");

    return main();

}
