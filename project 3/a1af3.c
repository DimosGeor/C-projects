#include <stdio.h>
#include "simpio.h"
#include "genlib.h"
#include <math.h>
 main()
 {
    long eth,autokinhta;

    eth=0;


    autokinhta=80000;
    while (autokinhta<=160000)
    {
        autokinhta= ceil(autokinhta * (1+0.07) ) ;
        eth++;
    }
    printf ("%ld \n",eth);


    printf ("%ld \n",autokinhta);
    system ("pause");


 }
