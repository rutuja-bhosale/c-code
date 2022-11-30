#include<stdio.h>
int main()
{
    int no=0,icnt=0;
    printf("enter any number");
    scanf("%d",&no);

    while(no!=0)
    {
        icnt++;
        no=no/10;
    }
    printf("Total no of digits %d",icnt);
    return 0;
}