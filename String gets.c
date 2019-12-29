#include<stdio.h>
int main()
{
    int s[100];

    int len = strlen(s);

    printf("Enter your full name :\n");
    gets(s);

    printf(" full name : %s\n",s);

    printf("Length =%d\n",len);

    return main();
}
