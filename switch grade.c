#include<stdio.h>
int main()
{

    int grade;
    printf("Enter your grade:\n");
    scanf("%d",&grade);

    switch(grade)
    {
    case 4:
           printf("Excellent\n");
           break;

    case 3:
          printf("Good\n");
          break;

    case 2:
           printf("Average\n");
           break;

    case 1:
          printf("poor\n");
          break;

    case 0:
           printf("Failing\n");
           break;

    default:
           printf("Illegal grade \n");
           break;
    }
    return main();
}
