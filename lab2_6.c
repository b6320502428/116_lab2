#include <stdio.h>
#include <string.h>
int main()
{
    int num,n,i;
    char val[9]="";
    scanf("%d",&num);
    sprintf(val, "%d",num);
    n=strlen(val);
    for(i=0; i<n; i++)
    {
        switch(val[i])
        {
        case '1':
            printf("One");
            break;
        case '2':
            printf("Two");
            break;
        case '3':
            printf("Three");
            break;
        case '4':
            printf("Four");
            break;
        case '5':
            printf("Five");
            break;
        case '6':
            printf("Six");
            break;
        case '7':
            printf("Seven");
            break;
        case '8':
            printf("Eight");
            break;
        case '9':
            printf("Nine");
            break;
        default:
            printf("Zero");
        }
        if(i!=n-1)
            printf("-");
    }
    return 0;
}
