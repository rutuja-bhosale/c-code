//write a function to accept the string from user and copy that string
#include<stdio.h>

void strcpyx(const char*,char*);

int main()
{
    char arr[50]={'\0'};
    char brr[50]={'\0'};
    printf("enter any string ");
    scanf("%[^\n]",arr);

    strcpyx(arr,brr);
    printf("%s",brr);
    return 0;
}

void strcpyx(const char *src,char *dest)
{
    if(src==NULL || dest==NULL)
    {
        return;
    }

    while(*src!='\0')
    {
        *dest=(*src);
        src++;
        dest++;
    }
}