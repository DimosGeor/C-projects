#include <stdio.h>
#include <math.h>
#include "genlib.h"
#include "simpio.h"

#define m 10
#define n 3
void ReadData(int row,int col,double temper[row][col]);
double CalculateAverage(int row,int col,double temper[row][col]);
void CalculateAvCity(int row,int col,double temper[row][col],double average[]);
void  CalculateMaxDeviation(double natavg,int row,int col,double temper[row][col],double mdeviation[]);
void PrintResults (double natavg,int row,double average[],double mdeviation[]);

main()
{
    double devnat[m][n], temper[m][n];
    double average[m], mdeviation[m];
    double avg;
    ReadData(m,n,temper);
    avg=CalculateAverage(m,n,temper);
    CalculateAvCity(m,n,temper,average);
    CalculateMaxDeviation(avg,m,n,temper,mdeviation);
    PrintResults(avg,m,average,mdeviation);

}


void ReadData(int row,int col,double temper[row][col])
{
    int i,j;
    for (i=0; i<m; i++)
		for (j=0; j<n; j++)
		  	{ printf("Temp of City %d During %d 8-hour period: ",i,j);
              temper[i][j] = GetReal();
              }
}

double CalculateAverage(int row,int col,double temper[row][col])
{
    int i,j;
    double average[row];
    for (i=0; i<m; i++)
    {
        average[i] = 0;
        for (j=0; j<n; j++)
        {
            average[i] += temper[i][j];
        }
        average[i] = average[i]/n;
    }
    return (average[i]);
}

void CalculateAvCity(int row,int col,double temper[row][col],double average[])
{
    int i,j;
    double natavg;
    natavg = 0;
    for (i=0; i<m; i++)
      for (j=0; j<n; j+=1)
         natavg += temper[i][j];
    natavg = natavg/(m*n);

}

void CalculateMaxDeviation(double natavg,int row,int col,double temper[row][col],double mdeviation[])
{
    int i,j;
    double devnat[m][n];
    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
            devnat[i][j] = fabs(natavg-temper[i][j]);
    for (i=0; i<m; i++)
    {
        mdeviation[i] = devnat[i][0];
        for(j=1; j<n; j++)
            if (mdeviation[i]<devnat[i][j]) mdeviation[i] = devnat[i][j];
    }
}

void PrintResults(double natavg,int row,double average[],double mdeviation[])
{
    int i;
    printf("%3.1f\n", natavg);
    for (i=0; i<m; i+=1)
		printf("City %d  %.1f  %.1f\n",i, average[i], mdeviation[i]);
    system("PAUSE");
}

