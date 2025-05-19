//dhmotika telh kai dhmotikos foros
#include <stdio.h>
#include "simpio.h"
#include "genlib.h"
int main ()
{

    int ka8ara,mikta;
    float DT,DF ;
    printf("dwse ta ka8ara tm tou spitiou?");
    ka8ara= GetInteger();
    printf("dwse ta mikta tm tou spitiou?");
    mikta= GetInteger();
    DT= ka8ara * 1.33* 61/365 ;
    printf ("Ta DT einai:  %.2f \n ", DT);
    DF=mikta * 0.13 * 61/365 ;
    printf ("O DF einai: %.2f \n" , DF) ;
    system ("pause");


}
