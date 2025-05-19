 #include <stdio.h>
   #include "simpio.h"
   #include "genlib.h"
   int main ()
         {
             int code,pieces,price,psifia34,psifia12;
             double ekptwsh,telikh_timh ;
             printf("dwse to kwdiko tou proiontos :");
             code=GetInteger();
            printf("dwse ton arithmo twn temaxiwn:");
            pieces=GetInteger();
            psifia34=code % 100;
            psifia12=code/100;
            price= psifia34 + psifia12;
            printf("H timh pwlhshs toy proiontos einai %d \n",price);
            if ( pieces >=1 && pieces<=30)
            {
                ekptwsh= price*pieces*10/100;
            }
             else if (pieces<=70)
             {
                 ekptwsh=price*pieces*20/100;
             }
          else          {
              ekptwsh=price*pieces*10/100;
          }

           printf("h ekptwsh einai %g \n",ekptwsh);
           telikh_timh=price*pieces-ekptwsh;
           printf("h telikh timh ths paragelias einai %g \n",telikh_timh);
           return 0;

        }
