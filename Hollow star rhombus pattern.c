
/**
 * C program to print hollow rhombus star pattern
 */

#include <stdio.h>

int main()
{
    int row, col,num;

    /* Input number of rows from user */
    printf("Enter Number  : \n");
    scanf("%d", &num);


    for(row=1; row<=num; row++)
    {
        /* Print trailing spaces */
        for(col=1; col<=num-row; col++)
        {
            printf(" ");
        }


        /* Print stars and center spaces */
        for(col=1; col<=num; col++)
        {
            if(row==1 || row==num || col==1 || col==num)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    printf("\n\n");

    return main();
}
