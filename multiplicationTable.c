#include<stdio.h>
int main()
{
    int no=0, i=0;
    printf("enter any number ");
    scanf("%d",&no);

    for(i=1;i<=10;i++)
    {
        printf("%d\n",no*i);
    } 
    return 0;
}