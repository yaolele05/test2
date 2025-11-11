/* #include <stdio.h>
int count(int num )
{
    int count=0;
    while(num!=0)
    {
        count+=num&1;
        num>>=1;
    }
    return count;
}
int main()
{
    int n;
    scanf("%d",&n);
    int result=count(n);
    printf("%d\n", result);
    return 0;
} */
/* int is1(int n,int p)
{
     return (n&(1<<p))!=0;
}
int main()
{
    int n,point;
    scanf("%d %d", &n,&point);
    printf("%d\n",is1(n,point));
    return 0;

} */
int left(unsigned int x,int n)
{
    int bits=sizeof(unsigned int)*8;
    n=n%bits;
    return(x<<n)|(x>>(bits-n));
}
int main()
{
    unsigned int x;
    int n;
    scanf("%u %d", &x,&n);
    printf("结果是%u",left(x,n));
}