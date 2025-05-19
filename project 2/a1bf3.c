#include<stdio.h>
#include "genlib.h"
#include"simpio.h"
#include <math.h>
main()
{
    long arithmo_aytok,orio,eth;
    double rythmos;

    printf("Dwse ton arxiko arithmo autokinhtwn :");
    arithmo_aytok =GetLong();
    printf("dwse ton ethsio rythmo ayxhshs :");
    rythmos=GetReal();
    printf("dwse to orio:");
    orio=GetLong();
    eth=0;

    while (arithmo_aytok<=orio)
    {
        eth++;
        arithmo_aytok=ceil (arithmo_aytok * (1+rythmos));
    }
    printf("%ld \n",eth);
    printf("%ld \n",arithmo_aytok);
}
