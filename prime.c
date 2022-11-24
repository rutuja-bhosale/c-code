#include<stdio.h>
int main()
{
    int no=0,i=0,flag=0;
    printf("enter any number ");
    scanf("%d",&no);

    for(i=2;i<no;i++)
    {
        if(no%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("number is prime");
    else
    printf("number is not prime");
    return 0;

}