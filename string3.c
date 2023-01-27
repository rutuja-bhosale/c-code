// write a program to accept full name from user and display it

#include<stdio.h>
int main()
{
    char name[50]={'\0'};
    printf("enter full name ");
    // scanf("%s",name);
    scanf("%[^\n]",name); //modified scanf

    printf("%s",name);
    return 0;
}