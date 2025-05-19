#include <stdio.h>
#include <simpio.h>
#include "genlib.h"
#include <ctype.h>
#include <string.h>
typedef struct{
    char name[30];
    int apousies;
    }studentT;

void readInput(FILE *infile,studentT students [],int *pApousies,int *pStudents);
void writeOutput(FILE* outfile,int size,studentT students[],int total);
int main()
{

   char inputfilename[30],outputfilename[30];
   int pApousies,pStudents,numberofstudents,numberofapousies;
   FILE *infile, *outfile;


    while (TRUE) {
        printf("File name: ");
        gets(inputfilename);
        infile = fopen(inputfilename, "r");
        if (infile != NULL) break;
        printf("File %s not found -- try again.\n", inputfilename);
    }
    printf("Dwste to onoma gia to arxeio exodou: ");
    gets(outputfilename);
    outfile = fopen(outputfilename, "w");
    studentT students[100];
    readInput(infile,students,&numberofapousies,&numberofstudents);
    writeOutput(outfile,numberofapousies,students,numberofstudents);
    fclose(infile);
    fclose(outfile);


    return 0;
}

void readInput(FILE* infile,studentT students [],int *pApousies,int *pStudents)
{
    int nscan,apousies,studcount,apouscount,line;
    char name[30],comments[68],termch;
    line=0;
    while(TRUE){
        nscan=fscanf(infile, "%30[^,], %d, %68[^\n]%c",
                     name, &apousies, comments, &termch);
        if (nscan==EOF) break;
        line++;
        if (nscan!=4 || termch!='\n'){
            printf("Error in line %d.Program termination \n",line);
            exit(1);

        }
        if (apousies>100){
            strcpy(students[*pApousies].name,name);
            students[*pApousies].apousies=apousies;
            (*pApousies)++;
        }
        (*pStudents)++;
    }

}


void writeOutput(FILE* outfile,int size,studentT students[],int total)
{
    int i;
    fprintf(outfile,"%-30s%-9s\n",
            "ONOMATEPWNIMO", "APOUSIES");
    for(i=1;i<39;i++)
        fputc('-',outfile);
    fputc('\n',outfile);
    for(i=0;i<size;i++)
        fprintf(outfile,"%-30s%-9d\n",
                students[i].name,students[i].apousies);
    for (i=1;i<39;i++)
       fputc('-',outfile);
    fputc('\n',outfile);
    fprintf(outfile,"%-30s%9d\n","SYNOLO MATHITWN:",total);
    fprintf(outfile,"%-30s%9d\n","SUNOLO APONTWN:",size);
}
