
#include<stdio.h>
int main()
{
    int num,col,row,count=0;

    printf("Enter Number :\n");
    scanf("%d",&num);

    for(row=1;row<=num;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d",count++);
        }

        printf("\n");
    }
    printf("\n");

    return main();
}
