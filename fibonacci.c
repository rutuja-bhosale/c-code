#include<stdio.h>
int main()
{
    int prev=0, next=1, res=0, i=0,no=0;
    printf("enter any number ");
    scanf("%d", &no);

    printf("%d\t%d\t",prev,next);
    for(i=1;i<=no;i++)
    {
        res=prev+next;
        printf("%d\t",res);

        prev=next;
        next=res;

    }
    return 0;

}