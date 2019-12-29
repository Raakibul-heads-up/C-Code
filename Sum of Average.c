#include<stdio.h>
int main()
{
    int num, i;
    float num1[100], sum = 0, average;

    printf("Enter the Numbers of elements: ");
    scanf("%d", &num);

    while (num > 100 || num <= 0)
    {
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &num);
    }

    for(i = 0; i < num1; ++i)
    {
        printf("%d. Enter number: ", i+1);
        scanf("%f", &num1[i]);
        sum += num1[i];

    }

    average = sum(float) / num1;

    printf("Sum of Number  =%d",sum);

    printf("Average = %.2f\n", average);

    return 0;
}

