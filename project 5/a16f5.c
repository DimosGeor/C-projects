#include <stdio.h>
#include "simpio.h"
#include "genlib.h"
#include "stdlib.h"
void populate(int a[50]);
void printArr(int a[50],int num);
void checkTable (int a[50],int x);
/*o b sthn xeiroterh periptwsh tha exei 50 theseis*/
main()
{
    int a[50],x,b[51],num,sum,k;
    populate(a);
    num=50;
    printArr(a,num);
    printf("\n------------------");

    printf("\nDose arithmo apo to 0 ews to 9:");
    x=GetInteger();
    checkTable(a,x);
    printf("\n------------------");

}

void populate(int a[50])
{
    int i;
    for (i=0;i<50;i++)
    {
        a[i]=rand()%10;
    }

}


void printArr(int a[],int num)
{
    int i;
    for (i=0;i<num;i++)
    {
        printf("%4d",a[i]);
    }
}


void checkTable(int a[50],int x)
{
    int i,b[50],k;

    k=0;
    for (i=0;i<50;i++)
    {
        if (a[i]==x)
        {

            b[k]=i;
            k=k+1;
        }
    }
    printf("\no Arithmos %d emfanizetai %d fores",x,k);
    printf("\nstis theseis:\n");

    printArr(b,k);




}


