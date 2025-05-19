#include <stdio.h>
#include "simpio.h"
#include "genlib.h"
 int main()
{
 int sms;
 float cost;
    printf("dwse plithos sms:");
    sms=GetInteger();
    /*ta 2 lepta einai 0.02 eurw kok...*/
    if (sms<=10)
        cost=sms * 0.02;
    else if (sms<=60)
        cost=10*0.02 + (sms-10)*0.015;
    else if (sms<=160)
        cost=10*0.02+50*0.015+(sms-60)*0.012;
    else
        cost=10*0.02+50*0.015+100*0.012+(sms-160)*0.01;
    printf("to sunoliko poso se euro : %f \n",cost);
 return 0;
}




