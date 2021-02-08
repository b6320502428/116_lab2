#include <stdio.h>
#include <string.h>
int main()
{
    char str[4];
    int n[3],i,j,a;
    scanf("%d %d %d",&n[0],&n[1],&n[2]);
    scanf("%s",str);
    for(i=0; i<3; i++)
    {
        for(j=0; j<3-i; j++)
        {
            if(n[j]>n[j+1])
            {
                a=n[j];
                n[j]=n[j+1];
                n[j+1]=a;
            }
        }
    }
    if(!(strcmp(str,"ABC")))
        printf("%d %d %d",n[0],n[1],n[2]);
    else if(!(strcmp(str,"ACB")))
        printf("%d %d %d",n[0],n[2],n[1]);
    else if(!(strcmp(str,"BAC")))
        printf("%d %d %d",n[1],n[0],n[2]);
    else if(!(strcmp(str,"BCA")))
        printf("%d %d %d",n[1],n[2],n[0]);
    else if(!(strcmp(str,"CAB")))
        printf("%d %d %d",n[2],n[0],n[1]);
    else if(!(strcmp(str,"CBA")))
        printf("%d %d %d",n[2],n[1],n[0]);
    else
        printf("Error");
    return 0;
}
