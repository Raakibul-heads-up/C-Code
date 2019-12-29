#include<stdio.h>
int main()
{
    int first[20][20],second[20][20],mul[20][20];
    int i,j,k,r1,r2,c1,c2,sum=0;

    printf("Enter row for First matrix:\n");
    scanf("%d",&r1);
    printf("Enter Column for First matrix:\n");
    scanf("%d",&c1);

    printf("Enter row for Second matrix:\n");
    scanf("%d",&r2);
    printf("Enter Column for Second matrix:\n");
    scanf("%d",&c2);

    while(c1 != r2)
    {
        printf("ERROR!!!!!!!!!!!!!");
    printf("Enter row for First matrix:\n");
    scanf("%d",&r1);
    printf("Enter Column for First matrix:\n");
    scanf("%d",&c1);

    printf("Enter row for Second matrix:\n");
    scanf("%d",&r2);
    printf("Enter Column for Second matrix:\n");
    scanf("%d",&c2);

    }

    printf("Enter first matrix:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("First[%d][%d]= ",i,j);
            scanf("%d",&first[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    printf("Enter Second matrix:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("Second[%d][%d]= ",i,j);
            scanf("%d",& second[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    //multiplication
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                sum = sum + first[i][k]*second[k][j];

            }
            mul[i][j]=sum;
            sum = 0;
        }
    }
    printf("\n\n");


    printf("First matrix are :\n");

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("\t%d ",first[i][j]);

        }
        printf("\n");
    }
    printf("\n\n");

    printf("Second matrix are :\n");

    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("\t%d ",second[i][j]);

        }
        printf("\n");
    }
    printf("\n\n");

    printf("Multiplication is :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("\t%d",mul[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

return main();
}
