#include<stdio.h>
int main()
{
    while(1)
    {

    float a,b , add ,sub, mul,div,avg,cel,fah  ;
    int op  ;
    printf("Enter first number :\n");
    scanf("%f",&a);

    printf("Enter second number :\n");
    scanf("%f",&b);



     printf("What operation do you want?\n");
      scanf("%d",&op);

    switch(op)
    {
        case 1:
               add = a+b ;
               printf("Addition of the number is =%f\n",add);
               break;

        case 2:
               sub = a-b;
               printf("Subtraction of two number is =%f\n",sub);
               break;

        case 3:
              mul = a*b;
              printf("Multiplication of two number is =%f\n",mul);
              break;

        case 4:
               div =a/b;
               printf("Division of two number is =%f\n",div);
               break;

        case 5:
               avg = a+b/2;
               printf("Average of two number is =%f\n",avg);
               break;

        case 6:
               cel =(b-32)*5/9;
               printf("Celsius is =%f\n",cel);
               break;

        case 7:
               fah =(9*a/5+32);
               printf("Fahrenheit is =%f\n",fah);
               break;

        default :
                 printf("Illegal operation\n");
                 break;

    }

    }
    return 0;
}
