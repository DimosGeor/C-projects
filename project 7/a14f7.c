#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "stdlib.h"
#include "string.h"
#include "math.h"
void random(char A[],int size);
main()
{
    char A[100];
    int size,i;
    printf("Word to shuffle :");
    gets(A);
    size=strlen(A);
    A[size]='\0';
    printf("Initial Word:%s",A);
    random(A,size);
    printf("  New Word: %s",A);

}

void random(char A[],int size)
{
    int i;
    int x1,x2;
    char temp;
    srand(time(NULL));
    x1=rand()%size;
    x2=rand()%size;
    temp=A[x1];
    A[x1]=A[x2];
    A[x2]=temp;





}
