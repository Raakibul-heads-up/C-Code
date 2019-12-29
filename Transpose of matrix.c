#include<stdio.h>
int main()
{
    int A[20][20],transpose[20][20];
    int col,row,i,j;

    printf("Enter number of Rows:\n");
    scanf("%d",&row);

    printf("Enter number of Rows:\n");
    scanf("%d",&col);

    printf("Enter A matrix :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);

        }
        printf("\n");
    }
    printf("\n\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            transpose[j][i] = A[i][j];
        }
    }

    printf("A matrix are :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\t%d",A[i][j]);

        }
        printf("\n");
    }
    printf("\n\n");

    printf("Transpose matrix are :\n");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("\t%d",transpose[i][j]);

        }
        printf("\n");
    }
    printf("\n\n");


}
