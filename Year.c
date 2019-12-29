#include<stdio.h>
int main()
{
    int year ,month,day,num;

    printf("Enter your number :");
    scanf("%d",&num);

    year  = num/365;

    num   = num-(365*year);

    month = num/30;

    day   = num-(month*30);

    printf("\nYear = %d",year);
    printf("\nMonth = %d",month);
    printf("\nDay = %d",day);

    printf(" \n\n");

    return main();
}
