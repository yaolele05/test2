#include <stdio.h>
/* int main()
{

    char str[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};\
    int n;
    scanf("%d",&n);
    int count=0;
    for(int i=0;i<n;i++)
    {
       
        for(int j=0;j<=i;j++)
      {  printf("%c",str[count]);
        count++;
      }
      printf("\n");
    }
    return 0;

} */
/* int main()
{
    int n;
    scanf("%d",&n);
    char str[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            printf(" ");
        }
        for(int k=0;k<i;k++)
        {
            printf("%c",str[k]);
        }
        for(int l=i-2;l>=0;l--)
        {
            printf("%c",str[l]);
        }
        printf("\n");
    }
    return 0;
} */
int main()
{
    double num1,num2;
    while(scanf("%lf%lf",&num1,&num2)==2)
    {
        if(num2==0)
        {
            printf("error\n");
        }
        else
        {
            printf("%.2lf\n",num1-num2/(num1*num2));
        }
    }
    return 0;
}