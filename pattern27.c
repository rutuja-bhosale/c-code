#include<stdio.h>
void Pattern27(int);
void printstar(int);

int main()
{
    int n=0;
    printf("enter any number");
    scanf("%d",&n);

    Pattern27(n);
    return 0;
}

void Pattern27(int no)
{
    int i=0;
    static int icnt=0;

    if(no!=0)
    {
        printf("%d",no);
        printstar(icnt);
        printf("\n");
        icnt++;

        Pattern27(no/10);  // recursion
    }
}

void printstar(int x)
{
    if(x!=0)
    {
        printf("*");
        printstar(x-1);   //recursion
    }
}