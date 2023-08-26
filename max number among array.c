#include<stdio.h>
#include<stdlib.h>

int main()

{
    //programme to display maximum number among array

    int *A;
    int length;
    printf("enter the length of an array");
    scanf("%d",&length);
   
    A=(int *)malloc(length*sizeof(int));
    printf("enter the element of array:");
    for(int i=0;i<length;i++)
    {
        scanf("%d",&A[i]);
    }
     for(int i=0;i<length;i++)
    {
        printf("A[%d]=%d ",i,A[i]);
    }
    int maxData=A[0];
    int maxIndex=0;

    for(int i=0;i<length;i++)
    {
        if(maxData<A[i])
        {
            maxData=A[i];
            maxIndex=i;
        }
    }

    printf("\nmaximum value is A[%d]=%d",maxIndex,maxData);
    free(A);
    return 0;

}