//write a program to accept array elements from user and display smallest array elements

#include<stdio.h>

int main()
{
    int arr[50];
    int size=0,i=0,min=0;

    printf("enter size of array ");
    scanf("%d",&size);

    printf("enter array elemnets ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];

    for(i=0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }

    printf("smallest element is %d\n",min);

    return 0;
}