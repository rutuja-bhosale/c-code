//write a function to accept string from user and count the occurance of character 'a','A' in it

#include<stdio.h>

int charAcount(const char*);

int main()
{
    char arr[50]={"\0"};
    printf("enter any string ");
    scanf("%[^\n]",arr);

    int ret=charAcount(arr);
    printf("%d\n",ret);
    return 0;
}

int charAcount(const char *p)
{
    int icnt=0;
    if(p==NULL)
    {
        return -1;
    }
    while(*p!='\0')
    {
        if(*p=='a' || *p=='A')
        {
            icnt++;
        }
        p++;
    }
    return icnt;
}