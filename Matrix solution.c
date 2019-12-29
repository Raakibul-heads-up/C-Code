#include<stdio.h>
int main()
{
    int row=0,col=0,size=0, sumabove=0, sumbelow=0;
    int matrix[20][20];

    /*get the size of matrix*/
    printf("Matrix Size :\n");
    scanf("%d",&size);

    printf("Enter matrix elements :\n");
    for(row=1;row<size+1;row++)
    {
        for(col=1;col<size+1;col++)
        {
            printf("Elements[%d][%d] =",row,col);
            scanf("%d",&matrix[row][col]);
        }
        printf("\n");
    }


    printf("\nThe given matrix is :\n");
    for(row=1;row<size+1;row++)
    {
        for(col=1;col<size+1;col++)
        {
            printf("%4d",matrix[row][col]);

        }
        printf("\n");
    }

    printf("\nDiagonal Elements Are :\n");
    for(row=1;row<size+1;row++)
    {
        for(col=1;col<size+1;col++)
        {
             if(row==col)
             {
                 printf("%4d",matrix[row][col]);
             }

        }
    }

    printf("\n Elements above the main diagonal :\n");
    for(row=1;row<size+1;row++)
    {
        for(col=1;col<size+1;col++)
        {
             if(row<col)
             {
                 printf("%4d",matrix[row][col]);
                 sumabove+= matrix[row][col];

             }

        }
    }
    printf("\n Elements below the main diagonal :\n");
    for(row=1;row<size+1;row++)
    {
        for(col=1;col<size+1;col++)
        {
             if(row>col)
             {
                 printf("%4d",matrix[row][col]);
                 sumbelow+= matrix[row][col];

             }

        }
    }

    printf("\nSum of elements above the main diagonal =%d\n",sumabove);

    printf("\nSum of elements below the main diagonal =%d\n",sumbelow);

    return main();

}
