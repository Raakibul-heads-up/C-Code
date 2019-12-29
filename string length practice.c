#include<stdio.h>
int main()
{
     char A[1000];

     printf("Enter data :\n");
     gets(A);

     int i=0,len=0;

     while(A[i]!='\0')
     {
         i++;
         len++;
     }
     printf("Length = %d",len);

     printf("\n\n");

    return main();
}
