#include <stdio.h>
void Rec(int);
void NonRec(int);

int main()
{
    int n=0;
    printf("Enter any number");
    scanf("%d",&n);

    NonRec(n);
    Rec(n);

    return 0;
}

// Non Recursion

void NonRec(int no)
{
    while(no!=0)
    {
        printf("*");
        no--;
    }
    printf("\n");
}

// Recursion


void Rec(int num)
{
    if(num!=0)
    {
        printf("*");
        Rec(num-1);
    }
}
