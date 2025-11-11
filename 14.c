#include <stdio.h>
/* struct funds
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
} */
#include <stdio.h>
#define LEN 50
struct funds
{
    char bank[LEN];
    double bankfund;
    char sve[LEN];
    double savefund;
};
double sum(const struct funds*);
int main()
{
    struct funds man={
        "soobim kim",
        4000.6,
        "Lucky person",
        8595.8

    };
    printf("the total is %.2lf\n",sum(&man));
    return 0;
}
double sum(const struct funds *mm)
{
  return (mm->bankfund+mm->savefund);
}


