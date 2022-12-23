#include<stdio.h>
void Pattern26(int);

int main()
{
    int n=0;
    printf("enter any number");
    scanf("%d",&n);

    Pattern26(n);
    return 0;
}

void Pattern26(int no)
{
    int i=0;
    static int icnt=0;

    if(no!=0)
    {
        printf("%d",no);

        for(i=0;i<icnt;i++)
        {
            printf("*");
        }
        printf("\n");
        icnt++;

        Pattern26(no/10);
    }
}