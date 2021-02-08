#include <stdio.h>
int main()
{
    int day,month,ans;
    scanf("%d %d",&day,&month);
    switch(month)
    {
    case 1:
        ans=(day+31)%7;
        break;
    case 2:
        ans=(day+28)%7;
        break;
    case 3:
        ans=(day+31)%7;
        break;
    case 4:
        ans=(day+30)%7;
        break;
    case 5:
        ans=(day+31)%7;
        break;
    case 6:
        ans=(day+30)%7;
        break;
    case 7:
        ans=(day+31)%7;
        break;
    case 8:
        ans=(day+31)%7;
        break;
    case 9:
        ans=(day+30)%7;
        break;
    case 10:
        ans=(day+31)%7;
        break;
    case 11:
        ans=(day+30)%7;
        break;
    case 12:
        ans=(day+31)%7;
        break;
    default:
        printf("Error");
    }
    printf("%d",ans);

    return 0;
}
