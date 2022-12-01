#include<stdio.h>
void Pattern3(int);

int main()
{
    int n=0;
    printf("enter any number");
    scanf("%d",&n);

    Pattern3(n);

    return 0;
}

void Pattern3(int no)
{
    int i=0;
    for(i=-no;i<=no;i++)
    {
        printf("%d",i);
    }
}