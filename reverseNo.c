#include<stdio.h>
int main()
{
    int no=0, rem =0;
    printf("enter any number");
    scanf("%d",&no);

    while(no!=0)
    {
        rem=no%10;
        printf("%d",rem);
        no=no/10;
    }
    return 0;
}