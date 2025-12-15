#include <stdio.h>
/*void prii(int num)
{
    char *a[5]={0};
        if(num==0)
        {
            a[0]="XXX";
            a[1]="X.X";
            a[2]="X.X";
            a[3]="X.X";
            a[4]="XXX";
        }

    if(num==1)
        {
            a[0]="..X";
            a[1]="..X";
            a[2]="..X";
            a[3]="..X";
            a[4]="..X";
        }
    if(num==2)
    {
        a[0]="XXX";
        a[1]="..X";
        a[2]="XXX";
        a[3]="X..";
        a[4]="XXX";
       }
    if(num==3)
    {
        a[0]="XXX";
        a[1]="..X";
        a[2]="XXX";
        a[3]="..X";
        a[4]="XXX";
        
      }
    if(num==4)
    {
        a[0]="X.X";
        a[1]="X.X";
        a[2]="XXX";
        a[3]="..X";
        a[4]="..X";
        
    }
    if(num==5)
    {
        a[0]="XXX";
        a[1]="X..";
        a[2]="XXX";
        a[3]="..X";
        a[4]="XXX";
    }
    if(num==6)
    {
        a[0]="XXX";
        a[1]="X..";
        a[2]="XXX";
        a[3]="X.X";
        a[4]="XXX";
       }
    if(num==7)
    {
        a[0]="XXX";
        a[1]="..X";
        a[2]="..X";
        a[3]="..X";
        a[4]="..X";
        
    }
    if(num==8)
    {
        a[0]="XXX";
        a[1]="X.X";
        a[2]="XXX";
        a[3]="X.X";
        a[4]="XXX";
     }
    if(num==9)
    {
        a[0]="XXX";
        a[1]="X.X";
        a[2]="XXX";
        a[3]="..X";
        a[4]="XXX";
     }
    for(int i=0;i<5;i++)
    {
       printf("%s\n",a[i]);
      }
    
}
int main()
{
    int n;

    scanf("%d",&n);
    int b[1001]={0};
  for(int i=0;i<n;i++)
  {
      scanf("%d",&b[i]);
      prii(b[i]);
      
   }
    return 0;
}*/
#include <stdio.h>
struct pep
{
    int id;
    int gr1;
    int gr2;
    
};
int main()
{
    
    int n;
    scanf("%d",&n);
    struct pep pp[n];
    int zon=0;
    int ave=0;
    for(int i=0;i<n;i++)
    {
        zon=0;
        ave=0;
        scanf("%d %d %d",&pp[i].id,&pp[i].gr1,&pp[i].gr2);
       
        zon=pp[i].gr1+pp[i].gr2;
        ave=pp[i].gr1*7+pp[i].gr2*3;
        if(zon>140&&ave>=800)
            printf("Excellent\n");
        else
            printf("Not excellent\n");

     }
    return 0;
}