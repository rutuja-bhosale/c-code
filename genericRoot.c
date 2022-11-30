#include<stdio.h>
int main()
{
    int no=0, rem=0, sum=0;
    printf("enter any number");
    scanf("%d",&no);

    while(no>9)
    {
        while(no!=0)
        {
            rem=no%10;
            sum=sum+rem;
            no=no/10;
        }
        printf("%d\n",sum);
        no=sum;
        sum=0;
    }
    return 0;
}