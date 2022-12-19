#include<stdio.h>
void Pattern21(int);

int main()
{
    int x=0;
    printf("enter values of row ");
    scanf("%d",&x);

    Pattern21(x);
    return 0;
}

void Pattern21(int row)
{
    int i=0,j=0;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
                printf("*");
        }
        printf("\n");
    }
}