#include<stdio.h>
int main()
{
    int A[20][20],i,j,row,col,sum;

    printf("Enter Number of Rows:\n");
    scanf("%d",&row);

    printf("Enter Number of Column:\n");
    scanf("%d",&col);

    Printf("Enter matrix :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("\t%d",&A[i]);
        }
        printf("\n");
    }

   printf("\n\n");

   printf("Matrix are :\n");

   for(i=0;i<row;i++)
   {
       for(j=0;j<col;j++)
       {
           printf("\t%d",A[i]);

       }
       printf("\n");
   }

   printf("\n\n");

   return main();
}
