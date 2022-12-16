#include<stdio.h>
void Pattern18(int,int);

int main()
{
    int x=0,y=0;
    printf("enter values of row and column");
    scanf("%d%d",&x,&y);

    Pattern18(x,y);
    return 0;
}

void Pattern18(int row,int col)
{
    int i=0,j=0;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            if(i==j)
            {
                printf("1");
            }
            else if(i>j)
            {
                printf("*");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
}