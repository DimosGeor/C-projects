#include <stdio.h>
#include <string.h>
#include "genlib.h"
#include <ctype.h>
#include "simpio.h"



int main()
{
   char infilename[30],outfilename[30],ch,ch1;
   FILE* infile;
   FILE* outfile;
   while (TRUE)
   {
       printf("Dwse onoma gia to arxeio eisodou:");
       gets(infilename);
       infile=fopen(infilename,"r");
       if (infile!=NULL) break;
       printf("File %s not found -- try again.\n", infilename);
   }
   printf("Dwse onoma gia to arxeio eksodou:");
   gets(outfilename);
   outfile=fopen(outfilename,"w");

   while (TRUE)
   {
       ch=getc(infile);

       if (ch==EOF) break;
       else
       {  if (isdigit(ch)==TRUE)
            fprintf(outfile,"%c",ch);
          else
            fprintf(outfile,"\n");
       }

   }

   fclose(infile);
   fclose(outfile);
   return 0;
}

