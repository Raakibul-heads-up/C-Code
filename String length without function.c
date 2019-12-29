#include<stdio.h>
int main()
{
     char s[1000];

     printf("Enter your data :\n");
     gets(s);

     int i=0,len=0;

     while(s[i]!='\0')
     {
         i++;
         len++;

     }
     printf("Length = %d",len);

     printf("\n\n");

     return main();

}
