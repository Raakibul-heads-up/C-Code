#include<stdio.h>
int main()
{
    int A[20][20],transpose[20][20];
    int i,j,row,col;

    printf("Enter number of Rows:\n");
    scanf("%d",&row);

    printf("Enter number of Column:\n");
    scanf("%d",&col);

    printf("Enter  A Matrix: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("\t%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            transpose[j][i] = A[i][j];
        }
    }
    printf("\n\n");

    printf("A Matrix are : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\t%d ",A[i][j]);

        }
        printf("\n");
    }
    printf("\n");


     printf("Transpose Matrix are : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\t%d ",transpose[i][j]);

        }
        printf("\n");
    }
    printf("\n");
    return main();
}
