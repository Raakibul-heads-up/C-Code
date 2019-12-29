#include<stdio.h>
int main()
{
    int i,start,end;

    printf("Enter lower limit :\n");
    scanf("%d",&start);

    printf("Enter Upper  limit :\n");
    scanf("%d",&end);

    printf("All even numbers from %d to %d are: \n", start, end);


    if(start%2 != 0)
    {
        start++;
    }

    for(i=start;i<=end;i=i+2)
    {
        printf("\t%d",i);
    }
    printf("\n\n");

    return main();

}
