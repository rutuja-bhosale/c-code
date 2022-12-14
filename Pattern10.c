#include<stdio.h>
void Pattern10(int,int);

int main()
{
    int x=0,y=0;
    printf("enter values of row and column");
    scanf("%d%d",&x,&y);

    Pattern10(x,y);
    return 0;
}

void Pattern10(int row,int col)
{
    int i=0,j=0,k=1;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("%d",k);
            k++;
        }
        printf("\n");
    }
}