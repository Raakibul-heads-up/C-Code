
 #include<stdio.h>
int main()
{
    int num,col,row;

    printf("Enter Number :\n");
    scanf("%d",&num);

    for(row=1;row<=num;row++)
    {
        for(col=1;col<=num;col++)
        {
            if(col==1||row==num||col==row)
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

    printf("\n");

    return main();
}
