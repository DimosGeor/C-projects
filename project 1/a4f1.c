/* file:a4f1.c*/
  #include <stdio.h>
  #include "simpio.h"
  #include "genlib.h"
  main()
  {
  int rate;
  long purchaseAmount;
  double profit,saleAmount ;
 printf ("dwste thn katharh axia:");
 purchaseAmount=GetLong();
 printf ("dwste to pososto kerdous");
 rate=GetInteger();
 profit=purchaseAmount *rate/100.0;
 printf ("to kerdos einai %g.\n",profit);
 saleAmount=profit+purchaseAmount;
 printf("to sunoliko poso einai %d. \n",saleAmount);
 system ("pause");
 }
