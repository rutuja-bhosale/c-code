#include<stdio.h>
void Pattern24(int);

int main()
{
    int x=0,y=0;
    printf("enter values of row ");
    scanf("%d",&x);

    Pattern24(x);
    return 0;
}

void Pattern24(int row)
{
    int i=0,j=0;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
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