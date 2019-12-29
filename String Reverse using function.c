#include<stdio.h>
int main()
{
    char A[1000];

    printf("Enter string :\n");
    gets(A);

    strrev(A);

    printf("Reverse is :%s",A);

    printf("\n");

    return main();
}
