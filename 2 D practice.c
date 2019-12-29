#include<stdio.h>
int main()
{
    int A[20][20],B[20][20];
    int i ,j ,row ,col ;

    printf("Enter number of Row :\n");
    scanf("%d",&row);

    printf("Enter number of Col :\n");
    scanf("%d",&col);

    printf("\n\n");

//scanning A matrix
    printf("Matrix of A :\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n\n\n");
//printing A matrix

    printf("Matrix of A are : \n ");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\t%d",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //scanning B matrix.

    printf("Matrix of B :\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("B[%d][%d]= ",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    printf("\n\n\n");

    //printing B matrix.

    printf("Matrix of B are : \n ");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\t%d",B[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return main();
}
