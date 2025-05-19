#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include "stdlib.h"
#include "math.h"
void populate_data(int row,int col,int A[row][col]);
void print_array(int row,int col,int A[row][col]);
void change_array(int row,int col,int A[row][col]);
main()
{
    int R,C,i,j,A[10][10];
    printf("Dwse ton arithmo twn grammwn:");
    R=GetInteger();
    printf("Dwse ton arithmo twn sthlwn:");
    C=GetInteger();
    populate_data(R,C,A);
    printf("ARXIKOS PINAKAS \n");
    print_array(R,C,A);
    change_array(R,C,A);
    printf("ALLAGMENOS PINAKAS \n");
    print_array(R,C,A);
}


void populate_data(int row,int col,int A[row][col])
{
    int i,j;
      for (i=0;i<=row;i++)
    {
        for (j=0;j<=col;j++)
        {
          A[i][j]=rand()%100;
        }
    }
}

void print_array (int row,int col,int A[row][col])
{
    int i,j;

    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {

         printf("%4d ",A[i][j]);
        }
        printf("\n");

    }

}

void change_array(int row,int col,int A[row][col])
{
    int max,i,j,pos;
    for (i=0;i<row;i++)
    {
        max=A[i][1];
        pos=1 ;
        for (j=1;j<col;j++)
        {
            if (A[i][j]>max)
                {
                    max=A[i][j];
                    pos=j;
                }

        }
        for (j=0;j<pos;j++)
        {
            A[i][j]=max;

        }
    }
}





