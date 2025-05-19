#include <stdio.h>
#include <genlib.h>
#include <simpio.h>
typedef struct
{
    char name[20];
    char surname[20];
    float misthos;
    float hours;
    float gross;
    float krathseis;
    float foros;
    float kathares_apodoxes;
}employeeT;
void GetData(int num,employeeT Data[]);
void Calc_salaries(int num,employeeT Data[]);
void print_data(int num,employeeT Data[]);
main()
{
    employeeT Data[100];
    int num,d;
    float calc;
    printf("Dose ton arithmo twn kathigiton: ");
    num=GetInteger();
    GetData(num,Data);
    Calc_salaries(num,Data);
    print_data(num,Data);

}

void GetData(int num,employeeT Data[])
{
    int i;
    for (i=0;i<num;i++)
    {
       printf("\n");
       printf("Dose ta stoixeia tou kathigiti %d \n",i);
       printf("Dose onoma: ");
       gets(Data[i].name);
       printf("Dose eponymo: ");
       gets(Data[i].surname);
       printf("Dose mistho oras: ");
       Data[i].misthos=GetInteger();
       printf("Dose ores ergasias: ");
       Data[i].hours=GetInteger();
    }



}

void Calc_salaries(int num,employeeT Data[])
{
    int i;
    for (i=0;i<num;i++)
    {
        Data[i].gross=Data[i].hours * Data[i].misthos;
        Data[i].krathseis=Data[i].gross * 15/100;
        Data[i].foros=(Data[i].gross-Data[i].krathseis)*0.07;
        Data[i].kathares_apodoxes=Data[i].gross-Data[i].krathseis-Data[i].foros;
    }

}



void print_data(int num,employeeT Data[])
{
    int i;
    printf("\n\n");
     printf("%-7s %-20s %-26s %-20s %-10s %-12s %-10s %-8s\n",
         "Name","Surname","Hourly Rate","Hours Worked","Gross","Deductions","Tax","Net");
    for (i=0;i<118;i++)
        printf("-");
    printf("\n");
    for (i=0;i<num;i++)
    {
      printf("%-7s %-20s %-26.2f %-20.2f %-10.2f %-12.2f %-10.2f %-8.2f",
                   Data[i].name,
                   Data[i].surname,
                   Data[i].misthos,
                   Data[i].hours,
                   Data[i].gross,
                   Data[i].krathseis,
                   Data[i].foros,
                   Data[i].kathares_apodoxes);
    //printf("\n");
 }
 for (i=0;i<118;i++)
        printf("-");
    printf("\n");
}
