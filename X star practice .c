#include<stdio.h>
int main()
{
    int num, col, row;

    printf("Enter Number :\n");
    scanf("%d",&num);

    for(row=1;row<=num;row++)
    {
        for(col=1;col<=num;col++)
        {
            if(row==col||row+col==num+1)
            {
                printf("%d",row);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return main();
}
