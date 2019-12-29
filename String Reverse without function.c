#include<stdio.h>
int main()
{
    char A[1000],B[1000];

    printf("Enter string :\n");
    gets(A);

    int i=0,len=0,j;

    while(A[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0,i=len-1;i>=0;i--,j++)
    {
        B[j]=A[i];
    }

    B[j]='\0';

    printf("Original string =%s\n\n",A);

    printf("Reverse string =%s\n",B);

    printf("\n\n");

    return main();
}
