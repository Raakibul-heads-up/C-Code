#include<stdio.h>
int main()
{
    int base , exponent;

    long long result = 1;

    printf("Enter a Base Number :\n");
    scanf("%d",&base);

    printf("Enter a exponent number :\n");
    scanf("%d",exponent);

    while(exponent !=0)
    {
        result *= base ;
        --exponent;
    }
    printf("Answer = %lld\n",result);

    return main();
}
