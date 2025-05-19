
#include <stdio.h>
#include "genlib.h"
#include "stdio.h"

main()
{
int i,j,cost,posot[5];
const int arr[4][5]={{10,4,5,6,7},{7,0,12,1,3},{4,9,5,0,8},{3,2,1,5,6}};
long int poso[4],sum;
float prom[4];


for (i=0;i<=3;i++)
{
    sum=0;

    for (j=0;j<=4;j++)
    {

      if (j==0)
        cost=25000*arr[i][j];
      if (j==1)
        cost=15000*arr[i][j];
      if (j==2)
        cost=32000*arr[i][j];
      if (j==3)
        cost=21000*arr[i][j];
      if (j==4)
        cost=9200*arr[i][j];
      sum+=cost;

    }
    poso[i]=sum;
}
for (i=0;i<=3;i++)
{
     prom[i]=poso[i] * 10/100;
}
for (j=0;j<=4;j++)
{
    posot[j]=0;
    for (i=0;i<=3;i++)
    {
        posot[j]=arr[i][j]+posot[j];
    }
}
   printf("synoliko poso eispraksis/pwlhth: %d %d %d %d \n",poso[0],poso[1],poso[2],poso[3]);
   printf ("promitheia/pwlhth:%.2f %.2f %.2f %.2f \n",prom[0],prom[1],prom[2],prom[3]);
   printf ("posothtes proiontwn: %d %d %d %d %d",posot[0],posot[1],posot[2],posot[3],posot[4]);

}


