#include<stdio.h>
int main()
{
    int A[20][20],i,j,row, col;

    printf("Enter number of Rows :\n");
    scanf("%d",&row);

    printf("Enter number of Column :\n");
    scanf("%d",&col);

    printf("Enter matrix :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    printf("Matrix are :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\t%d",A[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    return main();
}
