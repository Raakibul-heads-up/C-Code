#include<stdio.h>
int main()
{
    float a,b,c;

    printf("Enter first number :\n");
    scanf("%f",&a);

    printf("Enter second number :\n");
    scanf("%f",&b);


    printf("Enter third number :\n");
    scanf("%f",&c);

    if(a>b)
    {
        if(a>c)
            printf("%.3f is largest\n",a);
        else
            printf("%.3f is largest\n",c);

    }
    else
    {
        if(c>b)
            printf("%.3f  is largest\n");
        else
            printf("%.3f is largest\n",b);
    }
    return main();
}
