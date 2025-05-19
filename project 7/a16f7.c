#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "stdlib.h"
#include <string.h>
void sum_print(char A[],int size);

main()
{
    int size;
    char A[100];
    printf("Dose ena alfarithmitiko: ");
    gets(A);
    size=strlen(A);
    A[size]='\0';
    sum_print(A,size);



}

void sum_print(char A[],int size)
{
    int i,sum,k;
    sum=0;
    k=0;
    for (i=0;i<size;i++)
    {
        if (A[i]>='0' && A[i]<='9')
        {
            if (A[i]=='0') {sum+=0;}
            else if(A[i]=='1') {sum+=1;}
            else if (A[i]=='2') {sum+=2;}
            else if (A[i]=='3') {sum+=3;}
            else if (A[i]=='4') {sum+=4;}
            else if (A[i]=='5') {sum+=5;}
            else if (A[i]=='6') {sum+=6;}
            else if (A[i]=='7') {sum+=7;}
            else if (A[i]=='8') {sum+=8;}
            else if (A[i]=='9') {sum+=9;}


        }
        k++;
    }
    for (i=0;i<k;i++)
    {
      switch (A[i])
     {
       case '0': case '1': case '2': case '3': case '4': case '5':
       case '6': case '7': case '8': case '9':
           printf("%c",A[i]);
           if (i!=k-1) printf(" + ");
           break;

     }

    }
    printf("=%d",sum);

}
