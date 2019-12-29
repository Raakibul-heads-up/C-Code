#include<stdio.h>
struct person
{
    int age;
    float salary;

};

int main()
{
    struct person person1,person2,person3;

    printf("Information Person 1:\n");

    printf("Age :");
    scanf("%d",&person1.age);

    printf("Salary :");
    scanf("%f",&person1.salary);

    printf("Age =%d\n",person1.age);
    printf("Salary =%.2f\n",person1.salary);

    printf("\n");

    printf("Information Person2:\n");

    printf("Age :");
    scanf("%d",&person2.age);

    printf("Salary :");
    scanf("%f",&person2.salary);

    printf("Age =%d\n",person2.age);
    printf("Salary =%.2f\n",person2.salary);

    printf("\n");


    return main();

}
