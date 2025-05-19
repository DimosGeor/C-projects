#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
void GetData(int A[],int *k);
void Range(int k,int A[],int *max,int *min);
main()
{
    int k,A[100],max,min,i;
    printf("Ånter the elements of array,one per line.\n");
    printf("Use -1 to signal the end of the list. \n");
    GetData(A,&k);
    Range(k,A,&max,&min);
    printf("The range of values is %d-%d",min,max);
}

void GetData(int A[],int *k)
{
    int x,y;
    y=-1;
    x=0;
    while (x!=-1)
    {

       y++;
       printf("?");
       x=GetInteger();
       A[y]=x;


    }
    *k=y;

}

void Range(int k,int A[],int *max,int *min)
{
    int i;
    *max=A[0];
    *min=A[0];
    for (i=1;i<k;i++)
    {
        if (A[i]>*max)
        {
            *max=A[i];
        }
        if (A[i]<*min)
        {
            *min=A[i];
        }

    }
}




