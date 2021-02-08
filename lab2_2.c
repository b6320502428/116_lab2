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
    if(pro=='A')
    {
        if(min==200)
        {
            if(sec==0)
                pride=199;
            else
                pride=199+(sec*3/60);
        }
        else if(min>200)
            pride=199+(min-200)*3+(sec*3/60);
        else
            pride=199;
    }
    if(pro=='B')
    {
        if(min==400)
        {
            if(sec==0)
                pride=299;
            else
                pride=299+(sec*2/60);
        }
        else if(min>400)
            pride=299+(min-400)*2+(sec*2/60);
        else
            pride=299;
    }
    return 0;
}
