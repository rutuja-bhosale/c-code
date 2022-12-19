#include<stdio.h>
void Pattern23(int);

int main()
{
    int x=0;
    printf("enter values of row ");
    scanf("%d",&x);

    Pattern23(x);
    return 0;
}

void Pattern23(int row)
{
    int i=0,j=0;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        { 
            if(j%2==0)
            {
                printf("0");
            }
            else
            {
                printf("%d",j);
            }
        }
        printf("\n");
    }
}