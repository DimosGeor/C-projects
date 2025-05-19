
#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
int max(int a,int b);
int gr (int a,int b,int c);
main()
{
    int a,b,c,y,x;
    printf("dwse a:");
    a=GetInteger();
    printf("dwse b:");
    b=GetInteger();
    printf("dwse c:");
    c=GetInteger();
    x=2*max(a,b)+3* gr(a,b,c);
    y=x/4;
    printf("y= %d",y);

}


int max(int a,int b)
{
 if (a>b)
    return (a);
 else if (b>a)
    return (b);}

int gr(int a,int b,int c)
{
    int max1;
    max1==-14127912719714;
    if (a>max1 ) max1=a;
    if (b>max1) max1=b;
    if (c>max1) max1=c;
    return (max1);



}



