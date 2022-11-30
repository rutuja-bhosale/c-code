#include<stdio.h>
int main()
{
    int no=0, rem=0, max=0;
    printf("enter any number");
    scanf("%d",&no);

    while(no!=0)
    {
        rem=no%10;
        if(rem>max)
        {
            max=rem;
        }
        no=no/10;
    }
    printf("Largest digit is %d",max);
    return 0;
}