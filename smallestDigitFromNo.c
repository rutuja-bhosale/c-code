#include<stdio.h>
int main()
{
    int no=0, rem=0, min=9;
    printf("enter any number");
    scanf("%d",&no);

    while(no!=0)
    {
     rem=no%10;
     if(rem<min)
     {
        min=rem;
     }
     no=no/10;
    }
    printf("Smallest digit is %d",min);
    return 0;
}