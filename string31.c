#include<stdio.h>
void Pattern4(char*);
int main()
{
    char arr[]="Demo";
    Pattern4(arr);
    return 0;
}

void Pattern4(char *p)
{
    if(*p!='\0')
    {
        printf("%s\n",p);
        Pattern4(p+1);
        printf("%s\n",p);
    }
}