// write a function to accept string and char from user and count the occurance of that character in it
#include<stdio.h>

int charCount(const char*,char);

int main()
{
    char ch='\0';
    char arr[50]={'\0'};
    printf("enter any string ");
    scanf("%[^\n]",arr);

    printf("enter any character");
    scanf("%c",&ch);

    int ret=charCount(arr,ch);
    printf("%d\n",ret);
    return 0;
}

int charCount(const char *p,char ch)
{
    int icnt=0;
    if(p==NULL)
    {
        return -1;
    }

    while(*p!='\0')
    {
        if(*p==ch)
        {
            icnt++;
        }
        p++;
    }
    return icnt;
}
