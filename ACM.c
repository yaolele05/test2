#include <stdio.h>
/*int main()
{
    int n;
    scanf("%d",&n);
    char a[n];
    int r=0,g=0;
    for(int i=0;i<n;i++)
    {
           
   
      scanf(" %c",&a[i]);
        if(a[i]=='R')
        {
            r=1;
         
        }
         else if(a[i]=='G')
        {
           g=1;
        }
        else if(a[i]!='R'&&a[i]!='G')
        {
            r=0;
            g=0;
        }

    }
    if(r==1&&g==1)
    printf("Yes\n");
    else{
        printf("No\n");
    }
    return 0;
}*/
/*int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int ori[n];
    int m[k];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ori[i]);
    }
    int ans[k][101];
    for(int j=0;j<k;j++)
    {
     scanf("%d",&m[j]);
    
    for(int h=0;h<m[j];h++)
    {
      scanf("%d",&ans[j][h]);
    }
    }

   int(*aver(int ori[],int n)[]);
   int p=0,f=1;
   for(int j=0;j<k;j++)
   {
    for(int h=0;h<m[j];h++)
    {
        while(ans[j][h]!=aver(ori,n))
        {
            p++;
            if(p>count)
            {
                f=0; 
                break;
            }
          
        }
    }
   }
   if(f==1)
   printf("Yes\n");
   if(f==0)
   printf("No\n");
}
int*(aver(int ori[],int n)[ ])
   {
    int count =0;
    int num[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(i!=j && i!=k && k!=j)
                {
                    1/3*(ori[i]+ori[j]+ori[k])=num[count++];
                }
            }
        }
    }
    return num;
   } */
     