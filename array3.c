// write a program to accept array elements from user and display sum of all array elements and average of array elements

#include<stdio.h>

int main()
{
    int arr[50];
    int size=0,i=0,sum=0,avg=0;

    printf("enter size of array");
    scanf("%d",&size);

    printf("enter array elements ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }

    printf("sum of all array elements : %d\n",sum);
    
    avg=sum/size;
    printf("average of all array elements :%d\n",avg);

    return 0;
}