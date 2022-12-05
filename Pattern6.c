#include<stdio.h>
void Pattern6(int);

int main()
{
    int n=0;
    printf("enter any number");
    scanf("%d",&n);

    Pattern6(n);
    return 0;
}

void Pattern6(int no)
{
    int i=0,j=1;
    for(i=1;i<=no;i++)
    {
        printf("%d",j);
        j++;

        if(j==4)
        {
            j=1;
        }
    }
}