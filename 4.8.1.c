#include <stdio.h>
int main()
{
    char firstname[20];
    char lastname[20];
    scanf("%s %s", firstname, lastname);
    int lenfirst = 0;
    int lenlast = 0;
    lenfirst = strlen(firstname);
    lenlast = strlen(lastname);
    printf("%s %s\n", lastname, firstname);
    printf("%*d %*d\n", lenlast, lenlast);
    printf("\n");
    printf("%s %s\n", lastname, firstname);
    printf("%*d %*d\n", lenlast, lenlast);
    return 0;
    
}