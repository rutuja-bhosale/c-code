//write a function to accept the string and no from user and copy that no. of characters from source to destination string

#include<stdio.h>
void strNcpy(const char*,char*,int);

int main()
{
    int n=0;
    char arr[50]={'\0'};
    char brr[50]={'\0'};
    printf("enter any string ");
    scanf("%[^\n]",arr);

    printf("enter any number ");
    scanf("%d",&n);
    strNcpy(arr,brr,n);
    printf("%s",brr);
    return 0;
}

void strNcpy(const char *src,char *dest,int no)
{
    if(src==NULL || dest==NULL)
    {
        return;
    }
    while(no!=0 && *src!='\0')
    {
        *dest=(*src);
        src++;
        dest++;
        no--;
    }
}


