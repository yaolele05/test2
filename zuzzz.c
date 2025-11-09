#include <stdio.h>
//结构成员可以作为参数传递
struct funds
{
    char str[100];
    double amount;
    int x;

};
double sum(x,amount);
int main()
{
   struct funds mma={
    "saving people",
    1234.5
   };
   int x;
   double amount;
   scanf("%d %lf", &x, &amount);
   printf("the sum is%.2lf\n",sum(x,amount));
    
    return 0;
}
double sum(x,amount)
{
 return (x*amount);
}