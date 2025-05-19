#include <stdio.h>
#include "simpio.h"
#include"genlib.h"
double FPA(float x,int b);
main()
{
    int total,category,i;
    float cost ;
    double synoliko_kostos,synoliko_FPA,price;

    synoliko_FPA=0;
    synoliko_kostos=0;
    for (i=1;i<6;i++)
    {

        printf("dwse to plithos temaxiwn apo to proion %d:",i);
        total=GetInteger();
        printf("dwse timi gia to proion %d:",i);
        cost=GetReal();
        printf("dwse katigoria FPA gia to proin %d:",i);
        category=GetInteger();

        price=total*FPA(cost,category)+cost * total;
        synoliko_kostos=price+synoliko_kostos;
        synoliko_FPA=FPA(total,category)+synoliko_FPA;


    }
    printf("Synoliko kostos:%.2f\n",synoliko_kostos);
    printf("Synoliko fpa:%.2f",synoliko_FPA);




}


double FPA(float cost,int cat)
{
    float s;
    if (cat>5 || cat<1)
        {
        printf("Lathos kathgoria fpa \n" );
        s=0;}





           if (cat=1)
               s=0;

            if (cat=2)
               s= cost* 0.06;
            if (cat=3)
                s=cost *0.13;
            if (cat=4)
                s=cost *0.19;


          return (s);
}

