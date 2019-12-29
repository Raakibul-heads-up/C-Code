#include<stdio.h>
int main()
{
    char A[1000],B[1000];

    printf("Enter First String :\n");
    gets(A);

    printf("Enter Second String :\n");
    gets(B);

    int i=0,len=0,j=0;

    while(A[i]!='\0')
    {
        i++;
        len++;
    }

    while(B[j]!=' ')
    {
        A[len+j]=B[j];
        j++;
    }

    printf("Your Data is:%s",A);

    printf("\n\n");

    return main();
}
