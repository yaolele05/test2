#include <stdio.h>

/*char dig[10][5][4]=
{
    {"XXX","X.X","X.X","X.X","XXX"}, //0
    {"..X","..X","..X","..X","..X"}, //1
    {"XXX","..X","XXX","X..","XXX"}, //2
    {"XXX","..X","XXX","..X","XXX"}, //3
    {"X.X","X.X","XXX","..X","..X"}, //4
    {"XXX","X..","XXX","..X","XXX"}, //5
    {"XXX","X..","XXX","X.X","XXX"}, //6
    {"XXX","..X","..X","..X","..X"}, //7
    {"XXX","X.X","XXX","X.X","XXX"}, //8
    {"XXX","X.X","XXX","..X","XXX"}  //9
};
int main()
{
    char s[1001];
    int n;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf(" %c",&s[i]);
}
    for(int i=0;i<5;i++)
    {
        for(int j=0;s[j];j++)
        {
            printf("%s.",dig[s[j]-'0'][i]);
        }
        printf("\n");
    }
    return 0;
}*/
int main()
{
    int m,n;
    int a[1001];
    scanf("%d %d",&m,&n);
    int count=0;
     for(int i=m;i<=n;i++)
     {
        
        a[count++]= i;
     }    
     int len=0;
     char s[1000000];
     int b[11]={0};
     for(int i=0;i<count;i++)
     { 
        len+=sprintf(s+len,"%d",a[i]);

     }
     for(int i=0;i<len;i++)
     {
        
        if(s[i]=='0')
        b[0]++;
       else  if(s[i]=='1')
        b[1]++;
        else if(s[i]=='2')
        b[2]++;
        else if(s[i]=='3')
        b[3]++;
        else if(s[i]=='4')
        b[4]++;
        else if(s[i]=='5')
        b[5]++;
        else if(s[i]=='6')
        b[6]++;
        else if(s[i]=='7')
        b[7]++;
       else if(s[i]=='8')
        b[8]++;
        else if(s[i]=='9')
        b[9]++;
     }
     for(int i=0;i<=9;i++)
     printf("%d ",b[i]);
    return 0;
}