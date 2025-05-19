#include <stdio.h>
#include "simpio.h"
#include "stdio.h"
int main()
{
    int day;
    printf("Dwse enan arithmo apo to 1 eos to 7:");
    day=GetInteger();


    if (day==1)
        printf("The day is Monday");
    else if (day==2)
        printf("The day is Tuesday");
    else if (day==3)
        printf("The day is Wednesday");
    else if (day ==4)
        printf("The day is Thursday");
    else if (day==5)
        printf("The day is Friday");
    else if (day==6)
        printf("The day is Saturday");
    else
        printf("The day is Sunday");
    return 0;
}

