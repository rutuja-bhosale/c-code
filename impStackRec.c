#include <stdio.h>
void fun(n);

int main()
{
    int n=0;
    printf("enter any number");
    scanf("%d",&n);

    fun(n);
    return 0;
}

void fun(int no)
{
    if(no!=0)
    {
        printf("*");
        fun(no-1);
        printf("$");
    }
}      


