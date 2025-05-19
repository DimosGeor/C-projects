
   #include <stdio.h>
   #include <simpio.h>
   int main ()
   {
       long code;
       int hours;
       double salary,weekly_amount,wage;
    printf("dwse ton kwdiko:");
       code=GetLong();
      if (code>=1000)
      {printf("Dwse ton ethsio mistho:");
      salary=GetReal();
      weekly_amount=salary/52 ;
      printf("h ebdomadiaia amoibh einai %g",weekly_amount);
      }
      else
      {
          printf("dwse tis wres ebdomadiaias ergasias:");
          hours=GetInteger();
          printf("dwse thn amoibh ana wra:");
          wage=GetReal();
          if (hours<=40)
          {
              weekly_amount=hours * wage;
              printf("h ebdomadiaia amoibh einai %g",weekly_amount);

         }
         else
         {
             weekly_amount=(hours-40)*1.5*wage+40*wage ;
             printf("h ebdomadiaia amoibh einai %g",weekly_amount);

         }

      }
     return 0;
}
