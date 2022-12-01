#include<stdio.h>
void Pattern1(int);

int main()
{
    int n=0;
    printf("enter any number");
    scanf("%d",&n);
    
    Pattern1(n);
    return 0;
}

    void Pattern1(int no)
    {
        int i;
        for(i=1;i<=no;i++)
        {
            printf("1");
        }
    }
    
