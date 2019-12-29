
#include <stdio.h>
int main()
{
    int num1, num2, minmultiple;

    printf("Enter first number : ");
    scanf("%d", &num1 );

    printf("Enter second number : ");
    scanf("%d", &num2);


    // maximum number between n1 and n2 is stored in minMultiple
    minmultiple = (num1>num2) ? num1 : num2;

    // Always true
    while(1)
    {
        if( minmultiple%num1==0 && minmultiple%num2==0 )
        {
            printf("The LCM of %d and %d is = %d.\n\n", num1, num2,minmultiple);
            break;
        }

        ++minmultiple;
    }
    return main();
}
