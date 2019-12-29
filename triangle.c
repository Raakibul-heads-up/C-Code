#include<stdio.h>
#include<math.h>
int main()
{
    float a,b, area;

    printf("The length of equal arms :");
    scanf("%f",&a);

    printf("The length of other arms :");
    scanf("%f",&b);

    area = (b*sqrt (a*a-b*b))/4;

    printf("Area of triangle = %f ",area);

    return main();
}
