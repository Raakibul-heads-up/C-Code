#include<stdio.h>
int main()
{
    int A[20][20],B[20][20],i,j,row,col;
    int add[20][20];

    printf("Enter number of Rows :\n");
    scanf("%d",&row);

    printf("Enter number of Column:\n");
    scanf("%d",&col);

    printf("Enter first matrix :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");



    printf("Enter Second matrix :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    printf(" First matrix  is:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf(" \t%d ",A[i][j]);

        }
        printf("\n");
    }

    printf("\n\n");

    printf(" Second matrix  is:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf(" \t%d ",B[i][j]);

        }
        printf("\n");
    }

    printf("\n\n");

    //subtraction
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
             add[i][j] = A[i][j]+B[i][j];

        }
        printf("\n");
    }


    printf("Addition is :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
              printf("\t%d",add[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    return main();
}
