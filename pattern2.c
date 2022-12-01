#include<stdio.h>
void Pattern2(int);

int main()
{
    int n=0;
    printf("enter any number");
    scanf("%d",&n);

Pattern2(n);

return 0;
}

void Pattern2(int no)
{
    int i=0;
    for(i=1;i<=no;i++)
    {
        printf("%d",i);
    }
}

