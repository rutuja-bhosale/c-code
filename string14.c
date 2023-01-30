//write a function to accept the string from user and toggle that string

#include<stdio.h>

void strtoggle(char*);

int main()
{
    char arr[50]={'\0'};
    printf("enter any string ");
    scanf("%[^\n]",arr);

    strtoggle(arr);
    printf("%s\n",arr);

    return 0;
}

void strtoggle(char *p)
{
    if(p==NULL)
    {
        return;
    }
    while(*p!='\0')
    {
        if(*p>='a' && *p<='z')
        *p=*p-32;

        else if(*p>='A' && *p<='Z')
        *p=*p+32;

        p++;
    }
}