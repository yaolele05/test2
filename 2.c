#include <stdio.h>
int main()
{
int fen5,fen2,fen1;
int sum;
scanf("%d", &sum);
int i=1,j=1,k=1;

while (sum>=8 && i*5+j*2+k*1<sum)
{
    if(sum==8)
   { printf("fen5:%d, fen2:%d, fen1:%d",i,j,k);
    return 0;}
    else{
        if(i*5+j*2+k*1<sum && (i+1)*5+j*2+k*1<=sum )
        {
         i++;   
        }  
        if(i*5+j*2+k*1<sum && i*5+(j+1)*2+k*1<=sum) 
        {
            j++;
        }
         if(i*5+j*2+k*1<sum && i*5+j*2+(k+1)*1<=sum )
         {
            k++;
         }
    }
}
printf("fen5:%d, fen2:%d, fen1:%d",i,j,k);
}