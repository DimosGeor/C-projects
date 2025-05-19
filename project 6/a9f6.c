#include <stdio.h>
#include "simpio.h"
#include "genlib.h"
void calculateSales(int S,int P,int sales[S][P],int price[],int sp[]);
void calculateProductSales(int S,int P,int sales[S][P],int prods[]);
void maxArray(int size,int table[],int *max,int *pos);
void printArray(int size,int table[]);
int main()
{
    int sales[4][5]={{10,4,5,6,7},{7,0,12,1,3},{4,19,5,0,8},{3,2,1,5,6}},price[]={250,150,320,210,920},salesPerson[4],prods[5],max,maxP,pos,posP;
    calculateSales(4,5,sales,price,salesPerson);
    calculateProductSales(4,5,sales,prods);
    maxArray(4,salesPerson,&max,&pos);
    maxArray(5,prods,&maxP,&posP);
    printf("SalesMan-Sales \n");
    printArray(4,salesPerson);
    printf("Best SalesMan was %d with %d sales \n",pos,max);
    printf("Product-Items \n");
    printArray(5,prods);
    printf("Best Product was %d with %d items\n",posP,maxP);



}

void calculateSales(int S,int P,int sales[S][P],int price[],int sp[])
{
    int i,j;
    for (i=0;i<S;i++)
    {
        sp[i]=0;
        for(j=0;j<P;j++)
        {
            sp[i]+= sales[i][j] *price[j];

        }
    }
}

void calculateProductSales(int S,int P,int sales[S][P],int prods[])
{
    int i,j;
    for (j=0;j<P;j++)
    {
        prods[j]=0;
        for(i=0;i<S;i++)
            prods[j]+=sales[i][j];
    }
}

void maxArray(int size,int table[],int *max,int *pos)
{
    int i;
    *max=table[0];
    *pos=0;
    for (i=0;i<size;i++)
        if (*max<table[i])
          {  *max=table[i];
             *pos=i;}
}

void printArray(int size,int table[])
{
    int i;
    for (i=0;i<size;i++)
       printf("%d  %d \n",i,table[i]);
}
