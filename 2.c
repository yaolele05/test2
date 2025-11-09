#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '|'
int main()
{
   char c;
   char prev;
   long chars=0L;//字符数
   int lines=0;//行数
   int words=0;//单词数
   int plines=0;
   bool inword=false;
   prev='\n';
   while((c=getchar())!=STOP)
   {
      chars++;
      if(c=='\n')
      lines++;
      if(!isspace(c)&&!inword)
      {
         inword=true;
         words++;

      }
      if(isspace(c)&&inword)
      {
         inword=false;
            prev=c;
      }
      

   }
     if(prev=='\n')
      {
         plines==1;
      }
      printf("chars=%ld,words=%d,lines=%d,plines=%d\n",chars,words,lines,plines);
      
   return 0;
}