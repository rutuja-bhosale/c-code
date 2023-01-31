//write a function to accept the string from user and return no of small char,capital char and digits from the string
#include<stdio.h>

void strAllCount(const char*,int*,int*,int*);

int main()
{
    int a=0,b=0,c=0;
    char arr[50]={'\0'};
    printf("enter any string ");
    scanf("%[^\n]",arr);

    strAllCount(arr,&a,&b,&c);
    printf("small=%d\ncapital=%d\ndigits=%d\n",a,b,c);
    return 0;
}

void strAllCount(const char *p,int *scnt,int *ccnt,int *dcnt)
{
    if(p==NULL)
    {
        return;
    }
    while(*p!='\0')
    {
        if(*p>='a' && *p<='z')
        *scnt=*scnt+1;

        else if(*p>='A' && *p<='Z')
        *ccnt=*ccnt+1;

        else if(*p>='0' && *p<='9')
        *dcnt=*dcnt+1;
        p++;
    }
}