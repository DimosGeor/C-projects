#include <stdio.h>
#include <simpio.h>
#include <genlib.h>
#include <string.h>
#define M 10
typedef struct{
  char firstname[15];
  char lastname[25];
  float grades [6];
  float average ;
  char sex;
}studentT;
void readInput(FILE* infile,studentT students[],int *psuccessMales,int *psuccessFemales,float *ppercOfsuccessMales,float *ppercOfsuccessFemales);

void writeOutput(FILE *outfile,studentT students[],
                 int successFemales,float percOfsuccessFemales,
                 int successMales,float percOfsuccessMales);
int main()
{
   studentT students[M];
   char inputfilename[30];
   char outputfilename[30];
   FILE* infile;
   FILE* outfile;
   int successMales,successFemales;
   float percOfsuccessMales,percOfsuccessFemales;
   while (TRUE)
   {
       printf("DWSE ONOMA GIA TO ARXEIO EISODOU:");
       gets(inputfilename);
       infile=fopen(inputfilename,"r");
       if (infile !=NULL) break;
       printf("cannot open input file %s.Try again.\n",inputfilename);

   }
   printf("DWSE ONOMA GIA TO ARXEIO EXODOU:");
   gets(outputfilename);
   outfile=fopen(outputfilename,"w");
   readInput(infile,students,&successMales,&successFemales,&percOfsuccessMales,&percOfsuccessFemales);
   writeOutput(outfile,students,successFemales,percOfsuccessFemales,successMales,percOfsuccessMales);
   fclose(infile);
   fclose(outfile);

}


void readInput(FILE* infile,studentT students[],int *psuccessMales,int *psuccessFemales,float *ppercOfsuccessMales,float *ppercOfsuccessFemales)
{
    int i,nscan,line;
    char firstname[15],lastname[25],sex,termch;
    float grades[6];
    int males,females;
    float average;
    average=0.0;
    *psuccessMales=0;
    *psuccessFemales=0;
    males=0;
    females=0;
    line=0;
    while(TRUE)
    {
        nscan=fscanf(infile, "%15[^, ], %f, %f, %f, %f, %f, %f, %c, %68[^\n]%c",
                     firstname, lastname, &grades[0], &grades[1], &grades[2], &grades[3], &grades[4], &grades[5], &sex, &termch);
        if (nscan==EOF) break;
        line++;
        if (nscan !=10 || termch != '\n'){
            printf("Error in line %d.Program termination \n",line);
            exit(1);
        }
        average=0;
        for(i=0;i<6;i++)
        {
            average+=grades[i];
        }
        average/=6;
        if (sex=='A')
            males++;
        else
            females++;
        if (average>=10)
        {
            strcpy(students[(*psuccessMales)+(*psuccessFemales)].firstname,firstname);
            strcpy(students[(*psuccessMales)+(*psuccessFemales)].lastname,lastname);
            for (i=0;i<6;i++)
              students[(*psuccessMales)+(*psuccessFemales)].grades[i]=grades[i];
            students[(*psuccessMales)+(*psuccessFemales)].average=average;
            students[(*psuccessMales)+(*psuccessFemales)].sex=sex;
            if (sex=='A')
                (*psuccessMales)++;
            else
                (*psuccessFemales)++;

        }
    }
    *ppercOfsuccessMales=((float)(*psuccessMales)/males)*100;
    *ppercOfsuccessFemales=((float)*(psuccessFemales)/females)*100;
}

void writeOutput(FILE *outfile,studentT students[],int successFemales,float percOfsuccessFemales,int successMales,float percOfsuccessMales)
{
    int i;
    fprintf(outfile, "%-12s %-12s %-12s %-12s\n","EPITYXOUSES", "POSOSTO", "EPITYXONTES", "POSOSTO");
    fprintf(outfile, "%-12d %-12.1f %-12d %-12.1f\n",successFemales,percOfsuccessFemales,successMales,percOfsuccessMales);
    for (i=1;i<=75;i++)
        fputc('-',outfile);
    fputc('\n',outfile);

    for (i=0;i<(successMales+successFemales);i++)
        fprintf(outfile,"%-15s %-15s %4.1f %4.1f %4.1f %4.1f %4.1f %4.1f",
                students[i].firstname,students[i].lastname,students[i].grades[0],
                students[i].grades[1],students[i].grades[2],students[i].grades[3],
                students[i].grades[4],students[i].grades[5],students[i].average,
                students[i].sex);





}
