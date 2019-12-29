#include<stdio.h>
int main()
{
    int first[20][20],second[20][20],mul[20][20];
    int i,j,k, r1,r2,c1,c2,sum=0;


    printf("Enter Rows for First matrix :\n");
    scanf("%d",&r1);

    printf("Enter Column  for First matrix :\n");
    scanf("%d",&c1);

    printf("Enter Rows for Second matrix :\n");
    scanf("%d",&r2);

    printf("Enter Column  for Second  matrix :\n");
    scanf("%d",&c2);

    while(c1!=r2)
    {
    printf("Error!!! column of first matrix not equal to row of second matrix\n");

    printf("Enter Rows for First matrix :\n");
    scanf("%d",&r1);

    printf("Enter Column  for First matrix :\n");
    scanf("%d",&c1);

    printf("Enter Rows for Second matrix :\n");
    scanf("%d",&r2);

    printf("Enter Column  for Second  matrix :\n");
    scanf("%d",&c2);

    }

    //taking input of first matrix.

    printf("Enter elements of First matrix:\n");

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("first[%d][%d]=",i,j);
            scanf("%d",&first[i][j]);
        }
    }
    printf("\n\n");

    //taking input of second matrix.

    printf("Enter elements of Second matrix:\n");

    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("second[%d][%d]=",i,j);
            scanf("%d",&second[i][j]);
        }
    }
    printf("\n\n");

     //multiplying matrix.

     for(i=0;i<r1;i++)
     {
         for(j=0;j<c2;j++)
         {
             for(k=0;k<c1;k++)
             {
                 sum = sum + first[i][k] * second [k][j];
             }
             mul[i][j] = sum ;
             sum = 0;
         }
     }



    //printing first matrix.

    printf("Matrix of 'First'\n");

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
           printf("\t%d",first[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");


    //printing second matrix.

    printf("Matrix of 'Second'\n");

    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
           printf("\t%d",second[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");


    //printing result matrix.

    printf("Matrix of 'Result'\n");

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
           printf("\t%d ",mul[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");


return main();
}

