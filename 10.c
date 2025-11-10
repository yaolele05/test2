#include <stdio.h>
/* void copy(double a[],double b[],int n)
{
    for(int i=0;i<n;i++)
    {
        a[i]=b[i];
    }
}
int main()
{

    double num[2][3]={
        {
            2.3,5.6,7.8
        },
        {
          6.5,7.0,3.2
        }
    };
    double num2[2][3]={0};
    int x=2,y=3;
    for(int i=0;i<x;i++)
    {
      copy(  num2[i],num[i],y);
    }
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            printf("%.2lf ",num2[i][j]);
        }
        printf("\n");
    }

    return 0;
} */
/* void copy(double num1[],double num2[],int n)
{
  for(int i=0;i<n;i++)
  {
    num1[i]=num2[i];
  }
}
int main()
{
    int n,x;
    scanf("%d %d",&n,&x);
    double num1[n];
    double num2[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lf", &num2[i]);
    }
    copy(num1,num2+2,x);
    for(int i=0;i<x;i++)
    {
        printf("%.2lf ",num1[i]);
    }
    return 0;
} */
void sum(int num1[],int num2[],int size,int result[])
{
    for(int i=0;i<size;i++)
    {
        result[i]=num1[i]+num2[i];
    }
}
int main()
{
    int size;
    scanf("%d",&size);
  int a[size];
  int b[size];
    for(int i=0;i<size*2;i++)
    {
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);
    }
    int end[size];
    sum(a,b,size,end);
    for(int i=0;i<size;i++)
    {
        printf("%d",end[i]);
    }
}