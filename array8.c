//Dynamic memory allocation of 3D array

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int***p=NULL; //step1
    int first=0,second=0,third=0,i=0,j=0,k=0;

    printf("Enter dimensions of array ");
    scanf("%d%d%d",&first,&second,&third);
    
    p=(int***)malloc(first*sizeof(int)); //step2

    if(p==NULL)
    {
        printf("unable to allocate memory!!!");
        return -1;
    }

    for(i=0;i<first;i++)
    {
        p[i]=(int**)malloc(second*sizeof(int)); //step3
    }

    //step4
    for(i=0;i<first;i++)
    {
        for(j=0;j<second;j++)
        {
            p[i][j]=(int*)malloc(third*sizeof(int));
        }
    }
    
    //step5
    for(i=0;i<first;i++)
    {
        for(j=0;j<second;j++)
        {
            for(k=0;k<third;k++)
            {
                scanf("%d",&p[i][j][k]);
            }
        }
    }

    //step6
    for(i=0;i<first;i++)
    {
        for(j=0;j<second;j++)
        {
            for(k=0;k<third;k++)
            {
                printf("%d",&p[i][j][k]);
            }
        }
    }

    for(i=0;i<first;i++)
    {
        for(j=0;j<second;j++)
        {
            free(p[i][j]); //step7
        }

        free(p[i]); //step8
    }

    //step9
    free(p);

    return 0;

}