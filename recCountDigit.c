#include<stdio.h>
int CountDigit(int);

int main()
{
    int n=0,ret=0;
    printf("enter any number");
    scanf("%d",&n);

    ret= CountDigit(n);
    printf("Total no of digits %d",ret);

    return 0;
}

int CountDigit(int no)
{
    static int icnt=0;

    if(no!=0)
    {
        icnt++;
        CountDigit(no/10);
    }
    return icnt;
}