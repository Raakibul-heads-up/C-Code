#include<stdio.h>
int main()
{
    int a , b, c, gcd;
    printf("Enter two Integers :\n");
    scanf("%d%d",&a,&b);

    for(c=1;c<=a&&c<=b;c++)
    {
        if(a%c==0&&b%c==0)
            gcd=c;

    }
    printf("G.C.D of %d and %d is = %d\n\n",a,b,gcd);

    return main();
}
