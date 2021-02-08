#include <stdio.h>
#include <math.h>
int main()
{
    float time,pride,sec,tmp;
    char pro;
    int min,tmp2;
    scanf("%c %f",&pro,&time);
    tmp=time*100;
    min=(int)tmp;
    tmp2=min%100;
    min=min-tmp2;
    min=min/100;
    sec=(time-min)*100;
    if(pro=='A'||pro=='a')
    {
        if(min==200)
        {
            if(sec==0)
            {
                pride=199;
            }
            else
            {
                pride=199+(sec*3/60);
            }
        }
        else if(min>200)
        {
            pride=199+(min-200)*3+(sec*3/60);
        }
        else
        {
            pride=199;
        }
    }
    else if(pro=='B'||pro=='b')
    {
        if(min==400)
        {
            if(sec==0)
            {
                pride=299;
            }
            else
            {
                pride=299+(sec*2/60);
            }
        }
        else if(min>400)
        {
            pride=299+(min-400)*2+(sec*2/60);
        }
        else
        {
            pride=299;
        }
    }
    else
    {
        pride=0;
    }
    printf("%.2f",pride);
    return 0;
}
