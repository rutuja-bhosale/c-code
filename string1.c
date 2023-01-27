// write a progam to accept city name from user and display it

#include<stdio.h>

int main()
{
    char city[25]={'\0'};
    printf("enter city name ");
    scanf("%s",city);
    printf("%s\n",city);
    return 0;
}