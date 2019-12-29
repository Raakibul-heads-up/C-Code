#include<stdio.h>
int main()
{
    int A[20][20],i,j,row,col,sum = 0;

    printf("Enter number of Rows:\n");
    scanf("%d",&row);

    printf("Enter number of Column :\n");
    scanf("%d",&col);

    printf("Enter A matrix :\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("\t%d",&A[i][j]);

        }
        printf("\n");
    }

    printf("Matrix are :\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\t%d ",A[i][j]);

        }
        printf("\n");
    }

    printf("\n\n");

    printf("Diagonal element :\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j)
            {
                printf("%d ",A[i][j]);
                sum = sum + A[i][j];
            }
        }
    }

    printf("\nThe Sum = %d",sum);

    printf("\n\n");


    return main();
}
