#include<stdio.h>
int main()
{
    int no=0, i=0, fact=1;
    printf("enter any number ");
    scanf("%d",&no);

    for(i=no;i>=1;i--)
    {
        fact=fact*i;
    }
        printf("factorial is %d",fact);

    return 0;
}