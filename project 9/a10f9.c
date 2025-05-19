#include <stdio.h>
#include <string.h>
#include "genlib.h"
#include <ctype.h>
#include "simpio.h"

int main()
{
    FILE *infile,*outfile;
    char infilename[30],outfilename[30],ch,s[1000];
    int size,i;
    while (TRUE)
    {
        printf("Dwse to onoma tou arxeiou eisodou:");
        gets(infilename);
        infile=fopen(infilename,"r");
        if (infilename != NULL) break;
        printf("file %s not found...\n",infilename);
    }
    printf("Dwse onoma gia to arxeio exodou:");
    gets(outfilename);
    outfile=fopen(outfilename,"w");

    while (TRUE)
    {
        ch=getc(infile);
        if (ch==EOF) break;
        else
        {   if (ispunct(ch))
                if (ch==',')
                   fprintf(outfile,", ");
                else
                    fprintf(outfile,". ");
            else
                fprintf(outfile,"%c",ch);
        }
    }


    fclose(infile);
    fclose(outfile);
}
