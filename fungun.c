#include<stdio.h>

void fun(int);
void gun(int);

int main()
{
    int n=0;
    printf("enter any number");
    scanf("%d",&n);

    fun(n);
    gun(n);

    return 0;
}

//iteration
void fun(int no)
{
    while(no!=0)
    {
        printf("%d",no);
        no--;
    }
    printf("\n");
}

//recursion
void gun(int num)
{
    if(num!=0)
    {
        printf("%d",num);
        gun(num-1);
    }
}