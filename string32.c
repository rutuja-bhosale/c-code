#include<stdio.h>

int strlenrec(char*);

int main()
{
    char arr[]="Demo";
    int ret=strlenrec(arr);
    printf("%d",ret);
    return 0;
}

int strlenrec(char *p)
{
     static int icnt=0;
     if(*p!='\0')
     {
      icnt++;
       strlenrec(p+1);
      }
      return icnt;
}