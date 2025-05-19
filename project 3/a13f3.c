#include<stdio.h>
#include "genlib.h"
#include"simpio.h"

main()
{
    int i;
    double temp;
    temp=0;
    for (i=1;i<101;i++)
    {

        temp=1.0/i+temp;


    }
    printf("To athroisma einai %g",temp);
}
