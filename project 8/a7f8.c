#include <stdio.h>
#include "simpio.h"
#include <string.h>
#include "genlib.h"

typedef struct{
int number;
char type[20];
int cc;
char name[20];
int days;
float daily_rate;
float total_charge;
}carsT;

typedef struct{
char type[20];
int cc;
float ammount;
}best_carT;

int GetData (carsT rentals[]);
void Kena(int a);
float Calc(int size,carsT rentals[]);
best_carT MaxGain(int size,carsT rentals[]);
void PrintData(int size,carsT rentals[],float total,best_carT best);

int main()
{carsT rentals[20];
 best_carT car1;
 int pl,max_en;
 float total;
 pl=GetData(rentals);
 total=Calc(pl,rentals);
 car1=MaxGain(pl,rentals);
 PrintData(pl,rentals,total,car1);
return 0;}


void Kena(int a)
{   int i;
    for (i=0;i<a;i++)
        printf("-");
    printf("\n");
}

int GetData (carsT rentals[])
{int i,num_rentals;
 printf("Dose ton arithmo ton enoikiasewn: ");
 num_rentals=GetInteger();
 for (i=0;i<num_rentals;i++)
{printf("\nDose ta stoixeia tis enoikiasis %d\n",i);
 rentals[i].number = i;
 printf("Dose marka: ");
 gets(rentals[i].type);
 printf("Dose kybika: ");
 rentals[i].cc=GetInteger;
 printf ("Dose onoma pelati: ");
 gets(rentals[i].name);
 printf("Dose imeres enoikiasis: ");
 rentals[i].days=GetInteger();
 printf("Dose timi ana hmera: ");
 rentals[i].daily_rate=GetReal();}
 return num_rentals;
}

float Calc(int size,carsT rentals[])
{ float sum=0;
  int i;
  for (i=0;i<size;i++)
  {rentals[i].total_charge=rentals[i].daily_rate*rentals[i].days;
  sum+=rentals[i].total_charge;}
}

best_carT MaxGain(int size,carsT rentals[])
{int i,pos=0;
 best_carT best;
 best.ammount=rentals[0].total_charge;
 for (i=1;i<size;i++)
   {if (rentals[i].total_charge>best.ammount)
    {best.ammount=rentals[i].total_charge;
     pos=i;}}
 best.cc=rentals[pos].cc;
 strcpy(best.type,rentals[pos].type);
 return best;
 }

void PrintData(int size,carsT rentals[],float total,best_carT best)
{ int i;
  printf("\n\n");
  printf("%-7s %-20s %-10s %-5s %-6s %-8s\n",
         "Number","Name","Type","CC","Days","Price","Total");
  Kena(73);
  for (i=1;i<size;i++)
  {
      printf("%-7d %-20s %-10s %-5d %-5d %-6.02f %-8.02f\n",
             rentals[i].number,
             rentals[i].name,
             rentals[i].type,
             rentals[i].cc,
             rentals[i].days,
             rentals[i].daily_rate,
             rentals[i].total_charge);
  }
  Kena(73);
  printf("%58s %-8.02f\n","Total",total);
  printf("Best car: %s %d rented for %.2f Euros,\n",best.type,best.cc,best.ammount);
}
