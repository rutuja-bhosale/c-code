// write a function to accept string and no from user and print that no of characters from the string

#include <stdio.h>

void printNchar(const char*,int);

int main()
{
    int no=0;
    char arr[50]={'\0'};
    printf("enter any string ");
     scanf("%[^\n]",arr);
    printf("enter any number ");
    scanf("%d",&no);

    printNchar(arr,no);
    return 0;
}

void printNchar(const char*p,int n)
{
    while(n!=0 && *p!='\0')
    {
        printf("%c",*p);
        p++;
        n--;
    }
}
