#include <stdio.h>
int main()
{
    char name,b=92;
    int day;
    scanf("%c %d",&name,&day);
    if(name>=65&&name<=90&&day>0&&day<32)
    {
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
        else if(name>=83 && name<=90)
        {
            if(day%2==1)
            {
                if(day%10==5)
                    printf("%c(T_T)/",b);
                else
                    printf("(T_T)");
            }
            else
                printf("{x_x}");
        }
    }
    else
        printf("Error");
    return 0;
}
