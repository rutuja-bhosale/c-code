#include<stdio.h>
void Pattern25(int);

int main()
{
    int x=0,y=0;
    printf("enter values of row ");
    scanf("%d",&x);

    Pattern25(x);
    return 0;
}

void Pattern25(int row)

{
    int i=0,j=0;
    for(i=1;i<=row;i++)
    {
        printf("%d",i);
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
    }
}
