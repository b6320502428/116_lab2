#include <stdio.h>
#include <string.h>
int main()
{
    float time,pride,sec;
    char pro;
    int min;
    scanf("%c %f",&pro,&time);
    min=floor(time);
    sec=(time-min)*100;
    return 0;
}
