#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int count=0;
    int a[1001]={0};
int num=n;
    for(int i=1;i<=n;i++)
 {
    a[i]=1;
 }
 
    while(num>1)
    {
        for(int i=1;i<=n;i++)
        {
         if(a[i]==1)
       {
        count++;
         
       }
       if(count==3)
       {
        a[i]=0;
        count=0;
        num--;
       }
       }
    }
for(int i=1;i<=n;i++)
{
  if(a[i]==1)
  {
  printf("%d\n",i);
   }
}
return 0;

}
