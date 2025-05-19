#include <stdio.h>
#include <string.h>
#include <ctype.h>
void RemoveSpaces(char s[]);

main()
{
   int i;
   char s[80],name[80],server[80];
   gets(s);
   RemoveSpaces(s);
   printf("%s \n",s);
   i=0;
   while (s[i]!='@') i++;
   strncpy(name,s,i);
   name[i]='\0';
   printf("%s \n",name);
   printf("%d \n",strlen(name));
   strncpy(server,s+i+1,strlen(s)-i);
   server[strlen(s)-i]='\0';
   printf("%s",server);

}


void RemoveSpaces(char s[])
{
   int i,front,back;
   i=0;
   front=0;
   while(s[front]== ' ') front++;
   back=strlen(s)-1;
   while(s[back]== ' ') back--;
   strncpy(s,s+front,back-front+1);
   s[back-front+1]='\0';
}
