#include<stdio.h>
int main()
{
    int i,num,sum =0;

    printf("Enter number :\n");
    scanf("%d",&num);

    i=1;
    while(i<=num)
    {
        sum+=i;
        ++i;
    }
    printf("sum = %d\n",sum);


    return main();
}
