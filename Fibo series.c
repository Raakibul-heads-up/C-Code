#include<stdio.h>
int main()
{
    int fibo,num,count=0,first=0,second=1;

    printf("Enter number :\n");
    scanf("%d",&num);

    while(count<num)
    {
        if(count<=1)
        {
            fibo = count;
        }
        else
        {
            fibo = first + second ;
            first = second ;
            second = fibo;
        }
        printf(" \t%d",fibo);
        count++;
    }
}
