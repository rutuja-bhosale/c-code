// write a function to accept string from user and calculate no. of white spaces in that string

#include<stdio.h>

int countspace(const char*);
int main()
{
    char arr[50]={'\0'};
    printf("enter any string ");
    scanf("%[^\n]",arr);

    int ret= countspace(arr);
    printf("Total no. of white spaces %d",ret);
    return 0;
}
int countspace(const char*p)
{
    int icnt=0;

    //validation
    if(p==NULL)
    {
        return -1;
    }
    while(*p!='\0')
    {
        if(*p==' ')
        {
            icnt++;
        }
        p++;
    }
    return icnt;
}