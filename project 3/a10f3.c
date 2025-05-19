#include <stdio.h>




int main()

{
   int i,j;

   for (i=1;i<=10;i++)

   {

       printf("%d   ",i);

       if (i<10)printf(" ");

       for ( j=1;j<=10;j++)

       {

           printf("%d   ",i*j);

           if (i*j<10)printf(" ");

       }

       printf("\n");

   }

}
