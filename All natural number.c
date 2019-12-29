#include<stdio.h>
int main()
{
    int num ,i;

    printf("Enter Number :\n");
    scanf("%d",&num);


    printf("Number are 1 to %d :\n",num);

    for(i=1;i<num;i++)
    {
        printf("\t%d",i);

    }
    printf("\n\n");
    return main();
}
