/*
 * C program to print mirrored Rhombus star pattern series
 */

#include <stdio.h>

int main()
{
    int row, col, num;

    /* Input number of rows from user */
    printf("Enter Number : \n");
    scanf("%d", &num);


    for(row=1; row<=num; row++)
    {
        /* Print trailing spaces */
        for(col=1; col<row; col++)
        {
            printf(" ");
        }

        for(col=1; col<=num; col++)
        {
            printf("*");
        }

        printf("\n");
    }

    printf("\n\n");

    return main();
}

