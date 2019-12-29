/**
 * C program to print X star pattern series
 */

#include <stdio.h>

int main()
{
    int i, j, num;
    int count;

    printf("Enter Number: ");
    scanf("%d", &num);

    count = num * 2 - 1;

    for(i=1; i<=count; i++)
    {
        for(j=1; j<=count; j++)
        {
            if(j==i || (j==count - i + 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }


    printf("\n\n");
    return 0;
}
