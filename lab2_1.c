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
    else if(d>=70 && d<=74)
        strcpy(g, "B");
    else if(d>=65 && d<=69)
        strcpy(g, "C+");
    else if(d>=60 && d<=64)
        strcpy(g, "C");
    else if(d>=55 && d<=59)
        strcpy(g, "D+");
    else if(d>=50 && d<=54)
        strcpy(g, "D");
    else
        strcpy(g, "F");

    return 0;
}
