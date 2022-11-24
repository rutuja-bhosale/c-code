#include<stdio.h>
int main()
{
    int no=0,i=0;
    printf("enter any number ");
    scanf("%d",&no);

    do
    {
        printf("%d\n",no*i);
        i++;
    }while(i<=10);
    return 0;
    
}