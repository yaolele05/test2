/* #include <stdio.h>
#define PRINT(A,B) printf(#A"is %d and "#B"is %d\n",(A),(B))
#define SPACE ' '
#define PS() putchar(SPACE)
#define SUM (X,Y) ((X)*(X)*(Y))
#define PRINTT(V) printf("name is %s, address is %p\n",#V,&(V))
void show(const double a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%.2lf ",a[i]);
    }
    printf("\n");
}
double* newdarray(int n,const double b[])
{
    double *s=malloc(n*sizeof(double));
    for(int i=0;i<n;i++)
    {
        s[i]=b[i];

    }
    return s;
}
int main()
{
   int n;
   scanf("%d", &n);
   int arr[n];
   for(int i=0;i<n;i++)
   {
    scanf("%lf",&arr[i]);
   }
   double*p=newdarray(n,arr);
   show(p,n);
   free(p);
   return 0;  
}
 */
#include <string.h>
int main()
{
    double data1[100];
    double data2[300];
    for(int i=0;i<100;i++)
    {
        scanf("%d",&data1[i]);
    }
    for(int i=0;i<300;i++)
    {
        scanf("%d",&data1[i]);
    }
    memcpy(data1,data2+100,100*sizeof(double));
    for(int i=0;i<100;i++)
    {
        printf(".2lf",data1[i]);
    }

    return 0;
}