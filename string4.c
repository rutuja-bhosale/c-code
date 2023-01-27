// write a function to accept string from user and return the length of string

#include<stdio.h>

int strlenx(const char*);
int main()
{
    char arr[50]={'\0'};
    printf("enter any string ");
    scanf("%[^\n]",arr);

    int ret=strlenx(arr);
    printf("length of string is %d",ret);
    return 0;
}

int strlenx(const char*p)
{
    int icnt=0;

    //validation
    if(p==NULL)
    {
        return -1;
    }

    while(*p!='\0')
    {
        icnt++;
        p++;
    }

    return icnt;
}