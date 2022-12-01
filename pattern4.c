#include<stdio.h>
void Pattern4(int);

int main()
{
    int n=0;
    printf("enter any number");
    scanf("%d",&n);

    Pattern4(n);
    return 0;
}

void Pattern4(int no)
{
    int i=0;
    for(i=1;i<=no;i++)
    {
        if(i%2==0)
        {
            printf("*");
        }
         else
            printf("%d",i);
    }
}