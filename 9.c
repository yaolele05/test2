#include <stdio.h>
/* void number(double*a,double*b,double*c)
{
 double t;
 if(*a>*b)
 {
    t=*a;
    *a=*b;
    *b=t;
 }
    if(*a>*c)
    {
    t=*a;
    *a=*c;
    *c=t;
    }
    if(*b>*c)
    {
    t=*b;
    *b=*c;
    *c=t;
    }
}
int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    number(&a,&b,&c);
    printf("%.2lf %.2lf %.2lf\n",a,b,c);
    return 0;
} */
/* int result(char ch)
{

    if(ch>='A'&&ch<='Z')
    {
        return ch-'A'+1;
    }
    else if(ch>='a'&&ch<='z')
    {
        return ch-'a'+1;
    }
    else
    {
        return -1;
    }
}
int main()
{
    char ch;
    ch=getchar();
    result(ch);
    if(result(ch)!=-1)
    {
        printf("%d\n",result(ch));
    }
    else
    {
        printf("0\n");
    }
    return 0;
} */
#include <stdio.h>
 
 void put(char ch, int i, int j) {
    
     for (int row = 0; row < j; row++) {
         for (int col = 0; col < i; col++) {
             printf("%c", ch);
         }
        
         printf("\n");
     }
 }
 int main() {
     char ch;
     int i, j;
     scanf(" %c", &ch);
     scanf("%d", &i);
     scanf("%d", &j);
     put(ch, i, j);
     return 0;
 }
