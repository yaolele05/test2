#include <stdio.h>
/* int main(int argc,char*argv[])
{
    for(int i=argc-1;i>0;i--)
    {
        printf("%s",argv[i]);
    }
    printf("\n");
    return 0;
} */
 /*char*mystrncpy(char*s1,const char*s2,int n)
{
    char*o=s1;
    int i;
    for(i=0;i<n&&s2[i]!='\0';i++)
    {
      s1[i]=s2[i];
    }
    for(;i<n;i++)
    {
      s1[i]='\0';
    }
    return o;
}
int main()
{
    char str[15]="hello,soobin";
    char result[20];
    mystrncpy(result,str+2,5);
    printf("%s\n",result);
    return 0;
} */
/*int seek(char m,const char*a)
{
    while(*a!='\0')
{
if(*a==m)
    return 1;
      a++;
  }
    return 0;
}
int main()
{
    char ch;
   char str[100];
    fgets(str,99,stdin);
    int n=strlen(str)/sizeof(char);
     scanf("%c", &ch);
    int result=seek(ch,str);
printf("%d\n",result);
    return 0;
}
*/
int main(int argc,char*argv[])
{
    for(int i=argc-1;i>=1;i--)
{
  printf("%s",argv[i]);
}
printf("\n");
return 0;
}
