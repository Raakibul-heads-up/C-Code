#include<stdio.h>

void calculatepower(double base,double exp)

{
    double result =1,i;

    for(i=1;i<=exp ;i++)
    {
        result = result * base;
    }
    printf("%.2lf\n",result);

}
int main()
{
    int base ,exp;

    printf("Enter Base:\n ");
    scanf("%lf",&base);

    printf("Enter Exponential:\n");
    scanf("%lf",&exp);

    calculatepower(base,exp);
}
