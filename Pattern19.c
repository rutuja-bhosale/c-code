#include<stdio.h>
void Pattern19(int,int);

int main()
{
    int x=0,y=0;
    printf("enter values of row and column");
    scanf("%d%d",&x,&y);

    Pattern19(x,y);
    return 0;
}

void Pattern19(int row,int col)
{
    int i=0,j=0;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            if(j>=i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}