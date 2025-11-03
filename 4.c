#include <stdio.h>
int main()
{
       char start;
       int n;
       scanf("%s %d", &start, &n);
       int i;
       int flag=0;
       for(i=1;i>0;)
       {
        for(int j=0;j<(n+1)/2-i;j++)
        {
            printf(" ");
        }
        if(i==1)
        {
            printf("%c", start);
        }
        else{
           printf("%c",start+i-1);
           for(int j=0;j<2*i-3;j++)
             {
                printf(" ");
             }
             printf("%c",start+i-1);
        }
        if(i==(n+1)/2 || flag==1)
    {
        flag=1;
        i--;
    }
else 
    i++;
    printf("\n");
       }
       return 0;
}