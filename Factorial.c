#include<stdio.h>
int main()
{
    int number ;

    long long factorial;

    printf("Enter an integer :");
    scanf("%d",&number);

    factorial=1;

    while(number>0)
    {
        factorial = factorial*number;
        number--;
    }
    printf("\n\nFactorial = %lld\n\n",factorial);

    return main();
}
