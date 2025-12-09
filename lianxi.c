#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*int main()
{
    char word[20];
    char text[1000000];
    word[strcspn(word,"\n")]='\0';
    for(int i=0;word[i];i++)
    word[i]=tolower(word[i]);
  for(int i=0;text[i];i++)
   text[i]=tolower(text[i]);
   int lenw=strlen(word);
   int lent=strlen(text);
   int count=0;
   int f=0;
   int i=0;
   
   while(i<lent)
   {
    
    while(i<lent&&text[i]==' ')
    i++;
    if(i>=lent)
    break;
    int s=i;
    int j=i;
     while(j<lent&&text[j]!=' ')
     j++;
     int wol=j-i;
    if(wol==lenw&&strncmp(text+s,word,lenw)==0)
    {
     count++;
     if(f==0)
     f=s;
    }
      i=j;
   }
   if(count==0)
   printf("-1\n");
   else
   {
    printf("%d %d",count,f);
   }
  return 0;
}*/
int main()
{
  char s[201];
  int n=0;
  int count=0;
  int f=0;
  scanf("%d %s",&n,s);
  if(n<2)
  printf("0\n");
  for(int i=0;i<n-1;i++)
  {
    
    if((s[i]=='v'&&s[i+1]=='v')||(s[i]=='k'&&s[i+1]=='k'))
    {
      if(s[i]=='v'&&s[i+1]=='v'&&f==0)
      {
              s[i+1]='k';
            f=1;
       }
      if(s[i]=='k'&&s[i+1]=='k')
      {
       if(i==0&&f==0)
       {
       s[i]='k';
  
       f=1;
       }
       if(i>0&&f==0&&s[i-1]!='v')
       {
        s[i]='v';
       
        f=1;
       }
      }
      
    }
  }
  for(int i=0;i<n;i++)
  {
    if(s[i]=='v'&&s[i+1]=='k')
    count++;
  }
  printf("%d",count);
  return 0;
}