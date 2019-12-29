#include<stdio.h>
int main()
{
    int num, revnum = 0, remainder;

    printf("Enter an integer :");
    scanf("%d",&num);

    while(num!=0)
    {
     remainder = num%10;
     revnum =  revnum *10+remainder;

     num/=10;

    }

    printf("\n");
    printf("Reversed number =%d\n\n",revnum);


    return main();

}
