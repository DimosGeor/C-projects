
#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
int Cube (int x);
int Sum_Cube(int x);
bool IsArmstrong (int x);
int main()
{
    int x;
    for (x=1;x<1000;x++)
    {
        if (IsArmstrong(x))
            printf("o arithmos %d einai armstrong \n",x);
    }
    system("PAUSE");
    return 0;

}
int Cube(int x)
{
    int i,prod;
    prod=1;
    for (i=1;i<=3;i++)
    {
        prod=prod*x;
    }
    return (prod);


}


int Sum_Cube(int x)
{
    int sum,dig1,dig2,dig3;
    dig1=x%10;
    x=x/10;
    dig2=x%10;
    dig3=x/10;
    sum=Cube(dig1)+Cube(dig2)+Cube(dig3);
    return (sum);
}



bool IsArmstrong(int x)
{
   int sum;
   sum=Sum_Cube(x);
   return(sum==x);

}
