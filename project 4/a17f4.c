#include <stdio.h>
int total(int x);
main()
{
    int x;


  printf("athr 1...100=%d \n",total(100));

  printf("athr 1...1000=%d",total(1000));
  return 0;



}


int total(int x)
{
    int i,sum;
    sum=0;
    for (i=0;i<x+1;i++)
    {
        sum=sum+i;
    }
    return (sum);
}
