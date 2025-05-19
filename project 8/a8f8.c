#include <stdio.h>
#include <simpio.h>
#include <genlib.h>
typedef struct
{int width;
int height;
int depth;
int area;
int volume;
}boxT;

void GetData(boxT *Data);
void emvado(boxT *Data);
void ogkos(boxT *Data);
main()
{
  int n;
  boxT Data;
  GetData(&Data);
  emvado(&Data);
  printf("To emvadon tou koutiou einai %d cm2 \n",Data.area);
  ogkos(&Data);
  printf("O ogos tou koutiou einai %d cm3",Data.volume);
}

void GetData(boxT *Data)
{
   printf("Dose to mikos tou koutiou se cm: ");
   (*Data).width=GetInteger();
   printf("Dose to ypsos tou koutiou se cm: ");
   (*Data).height=GetInteger();
   printf("Dose to vathos tou koutiou se cm: ");
   (*Data).depth=GetInteger();

}

void emvado(boxT *Data)
{
     (*Data).area=2*(*Data).width*(*Data).height+2*(*Data).width*(*Data).depth+2*(*Data).height*(*Data).depth;

}


void ogkos(boxT *Data)
{
    (*Data).volume=(*Data).width*(*Data).height*(*Data).depth;
}
