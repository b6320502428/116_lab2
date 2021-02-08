#include <stdio.h>
int main()
{
    char name,b=92;
    int day;
    scanf("%c %d",&name,&day);
    if(name>=65 && name<=73)
    {
        if(day%2==1)
        {
            if(day%10==5)
                printf("%c(^_^)/",b);
            else
                printf("(^_^)");
        }
        else
        printf("{@_@}");
    }
    else if(name>=74 && name<=82)
    {
        if(day%2==1)
        {
            if(day%10==5)
                printf("%c(*o*)/",b);
            else
                printf("(*o*)");
        }
        else
        printf("{*v*}");
    }
    return 0;
}
