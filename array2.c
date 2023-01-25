// write a program to accept array elements from user and display it's reverse

#include<stdio.h>

int main()
{
    int arr[50];
    int size=0,i=0;
    printf("enter size of array ");
    scanf("%d",&size);
    //flushall();

    printf("enter array elements ");

    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("array elements are:\n");

    for(i=size-1;i>=0;i--)
    {
        printf("%d",&arr[i]);
    }

    return 0;
}