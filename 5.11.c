#include <stdio.h>
/* int main()
{
    int first,second;
    scanf("%d", &second);
    while(1)
    {
        scanf("%d",&first);
        if(first<=0)
        {
            printf("Done.\n");
            return 0;
        }
        else{
            printf("%d %% %d is %d\n",first,second,first%second);

        }
    }

    return 0;
} */
/* int main()
{
    double result(double );
    double x;
    scanf("%lf",&x);
     printf("%.12lf\n",result(x));
    return 0;
}
double result(double x)
{
    return x*x*x;
} */
int main()
{
    void temp(double );
    double c;
    while(scanf("%lf",&c)==1)
    {
        temp(c);
    }

    return 0;
}
void temp( const double c)
{
    double f,k;
    f=5.0/9.0*(c-32.0);
    k=f+273.15;
    printf("%.2f %.2f\n",f,k);
}
