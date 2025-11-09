#include <stdio.h>
int main()
{
    char n;
    scanf("%c",&n);
    switch(n)
    {
        case'b':
        printf("sooobin\n");
        case'c':
        printf("omgg\n");
        break;
        case'a':
        printf("hello\n");
        break;
        default:
        printf("txt - tws\n");  
    }
    int chcount=0;
    char ch;
    while((ch=getchar())!='\n')
    {
        if(ch!=' ')
        {
            chcount++;
            putchar(ch);
            printf("%d\n", chcount);
        }
    }
    return 0;
}