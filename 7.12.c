#include <stdio.h>
/* int main()
{
    char ch;
    int count=0;
    while(ch=getchar()!='#')
    {
        printf("%c %d",ch,ch);
        count++;
        if(count%8==0)
        {
            printf("\n");
        }
    }
    return 0;
} */
/* int main()
{
    int x;
    int jcount=0;
    int ocount=0;
    double sumj,sumo;
    while((x=getchar())!='0')
    {
        x=x-'0';
        if(x%2==0)
        {
            sumo+=x;
            ocount++;
        }
        else
        {
            sumj+=x;
            jcount++;
        }
    }
    printf("%d %d %.2lf %.2lf",jcount,ocount,sumj/jcount,sumo/ocount);
    return 0;
} */
int main()
{
  char ch;
  int count=0;
  while((ch=getchar())!='#')
  {
    if(ch=='.')
    {
        putchar('!');
        count++;
    }
    else if(ch=='!')
    {
        putchar('!');
        putchar('!');
        count+=2;
    }
    else
    {
        putchar(ch);
        
    }
    
  }
  printf("%d\n",count);
    return 0;
}
