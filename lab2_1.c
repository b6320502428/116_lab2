#include <stdio.h>
#include <string.h>
int main()
{
    int a,b,c,d;
    char g[4];
    scanf("%d %d %d",&a,&b,&c);
    d=a+b+c;
    if(d>=80 && d<=100)
        strcpy(g, "A");
    else if(d>=75 && d<=79)
        strcpy(g, "B+");
    return 0;
}
