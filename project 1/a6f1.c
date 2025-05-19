//programma upologismou dwrou enos upallhlou
#include <stdio.h>
#include "simpio.h"
#include "genlib.h"
main ()
{
    int workdays;
    long hmerisiaAmoibh ;
    double posostoDwrou,totalPayment,PosoDwrou ;
    printf("dwse tis hmeres ergasias tou etous:");
    workdays=GetInteger();
    printf("dwse thn hmerisia amoibh:");
    hmerisiaAmoibh=GetLong();
    printf("dwse to pososto dwrou:");
    posostoDwrou=GetReal();
    totalPayment=hmerisiaAmoibh*workdays ;
    PosoDwrou=totalPayment * (posostoDwrou );
    printf("to dwro einai %g.\n",PosoDwrou);
    system ("pause");
}
