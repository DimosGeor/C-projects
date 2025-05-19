#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
main()
{
    int i,A[5],temp,P[5];
    for (i=0;i<=4;i++)
    {
        printf("Enter number:");
        A[i]=GetInteger();
    }


    P[0]=A[4];
    P[1]=A[0];
    P[2]=A[1];
    P[3]=A[2];
    P[4]=A[3];
    for (i=0;i<=4;i++)
    {
        printf("%d ",P[i]);

    }


}
