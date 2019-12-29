#include<stdio.h>
int main()
{
    int first[20][20],second[20][20],result[20][20];
    int r1,r2,c1,c2,i,j,k,sum;

    printf("Enter first matrix row :\n");
    scanf("%d",&r1);
    printf("Enter first matrix column :\n");
    scanf("%d",&c1);

    printf("Enter Second matrix row :\n");
    scanf("%d",&r2);
    printf("Enter Second matrix column :\n");
    scanf("%d",&c2);

    while(c1!=r2)
    {
        printf("Error!!!!!!!!!\n");

        printf("Enter first matrix row :\n");
        scanf("%d",&r1);
        printf("Enter first matrix column :\n");
        scanf("%d",&c1);

        printf("Enter Second matrix row :\n");
        scanf("%d",&r2);
        printf("Enter Second matrix column :\n");
        scanf("%d",&c2);
    }
    //input First matrix

    printf("First matrix :\n");

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("[%d][%d] = ",i,j);
            scanf("%d",&first[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //input Second matrix

    printf("Second matrix :\n");

    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("[%d][%d] = ",i,j);
            scanf("%d",&second[i][j]);
        }
        printf("\n");
    }

    printf("\n");

//printing result matrix
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                sum = sum + first[i][k]*second[k][j];

            }
            result[i][j]=sum;
            sum=0;
        }
    }
    printf("\n");


    //printing first matrix
    printf("First matrix are :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("\t%d",first[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");



    //printing Second matrix
    printf("Second matrix are :\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("\t%d",second[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");




    printf("The result of matrix :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("\t%d",result[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");


    return main();
}
