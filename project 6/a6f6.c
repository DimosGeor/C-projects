#include <stdio.h>
#include "genlib.h"
#include "simpio.h"


#define N 5

void ReadData(int P,int A[N][P]);
void FindMean(int A[N][4],int num,float *MO_A,float *MO_G);
main()
{
    int num,A[N][4],i,j;
    float MO_A,MO_G;
    ReadData(4,A);
    FindMean(A,1,&MO_A,&MO_G);

    for (i=1;i<4;i++)
    {
        num=i;
        FindMean(A,num,&MO_A,&MO_G);
        if (num==1){ printf("Mesos oros barous andrwn:%.2f \n",MO_A);
                    printf("Mesos oros barous gunaikwn:%.2f \n",MO_G);
                    }
                    printf("\n");
        if (num==2){printf("Mesos oros ypsous andrwn:%.2f \n",MO_A);
                    printf("Mesos oros ypsous gunaikwn:%.2f \n",MO_G);
                    }
                    printf("\n");
        if(num==3){printf("Mesos oros hlikias andrwn:%.2f \n",MO_A);
                   printf("Mesos oros hlikias gynaikwn:%.2f \n",MO_G);}
    }

}

void ReadData(int P,int A[N][P])
{
    int i,j;
    for (i=0;i<N;i++)
        {for (j=0;j<P;j++)
         {
            if (j==0) printf("Dwse fulo: ");
            if (j==1) printf("Dwse baros: ");
            if (j==2) printf ("Dwse ypsos: ");
            if (j==3) printf("Dwse ilikia: ");
            A[i][j]=GetInteger();

         }
         printf("------ \n");
        }
}


void FindMean(int A[N][4],int num,float *MO_A,float *MO_G)
{
    int i,j,sumA,sumG,g,a;
    float x,y;
    sumA=0;
    sumG=0;
    a=0;
    g=0;
    for (i=0;i<N;i++)
    {
        if (A[i][0]==0)
           {
            sumA+=A[i][num];
            a++;}
        else
        {
            sumG+=A[i][num];
            g++;}
    }
    y=sumA/a;
    *MO_A=y;
    x=sumG/g;
    *MO_G=x;
}
