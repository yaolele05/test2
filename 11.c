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
 char*mystrncpy(char*s1,const char*s2,int n)
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
} 