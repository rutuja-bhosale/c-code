#include<stdio.h>
void Pattern5(int);

int main()
{
    int n=0;
    printf("enter any number");
    scanf("%d",&n);

    Pattern5(n);

return 0;
}

void Pattern5(int no)
{
    int i=0,j=1;
    for(i=1;i<=no;i++)
    {
        if(i%2==0)
            printf("*");
        else
        {
            printf("%d",j);
            j++;
        
    }
}}