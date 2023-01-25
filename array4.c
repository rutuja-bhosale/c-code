// write a program to accept array elements from user and display largest element

#include<stdio.h>

int main()
{
    int arr[50];
    int size=0,i=0,max=0;
    
    printf("enter size of array ");
    scanf("%d",&size);

    printf("enter array elements ");

    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("largest element is %d\n",max);

    return 0;

}