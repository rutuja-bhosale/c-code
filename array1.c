// write a program to accept array elements from user and display it

#include<stdio.h>

int main()
{
    int arr[50];
    int size=0,i=0;

    printf("enter size of array ");
    scanf("%d",&size);

    printf("enter array elements\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size;i++)
    {
        printf("%d",&arr[i]);
    }

    return 0;
}