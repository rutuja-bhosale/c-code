#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p=NULL;
    int size=0,i=0;

    printf("enter size of array ");
    scanf("%d",&size);

    p=(int*)malloc(size*sizeof(int));

    //validation

    if(p==NULL)
    {
        printf("sorry memory is not allocated !!");
        return -1;
    }

    printf("enter array elements");
    for(i=0;i<size;i++)
    {
        scanf("%d",&p[i]);
    }

    printf("array elements are:\n");

    for(i=0;i<size;i++)
    {
        printf("%d\t",p[i]);
    }

    free(p);
    return 0;

}