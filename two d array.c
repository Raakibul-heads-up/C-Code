#include<stdio.h>
int main()
{
    int A[3][3],i,j;
    printf("Enter matrix :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&A[i][j]);

        }
    }
    printf(" Matrix is :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return main();
}
