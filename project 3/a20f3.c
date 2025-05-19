#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
main()
{
    int age,max,min,p,x;
    min=1147941;
    max=-10000000;
    printf("dwse thn hlikia:");
    age=GetInteger();
    p=0;
    x=0;
    while (age!=-1)
    {
        if (age>max)
            {max=age;
            p=p+1;}
        if (age<min)
            {min=age;
            x=x+1;}
        printf("dwse thn hlikia:");
        age=GetInteger();
    }
    if (p>0)
    printf("H megaluterh hlikia einai %d \n",max);
    if (x>0)
    printf("H mikroterh hlikia einai %d",min);
}
