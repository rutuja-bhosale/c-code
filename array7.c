// Dynamic Memory allocation for 2D array

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int **p=NULL;
    int row=0,col=0,i=0,j=0;

    printf("enter values of rows & columns");
    scanf("%d%d",&row,&col);

    p=(int**)malloc(row*sizeof(int)); //step2

    //validations

    if(p==NULL)
    {
        printf("sorry memory not available!!");
        return -1;
    }

    //step3

    for(i=0;i<row;i++)
    {
        p[i]=(int*)malloc(col*sizeof(int));
    }

    //step4

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&p[i][j]);
        }
    }
    //step5
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d",p[i][j]);
        }
    }

    //step6
    for(i=0;i<row;i++)
    {
        free(p[i]);
    }

    //step7
    free(p);
    return 0;

}