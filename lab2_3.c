#include <stdio.h>
#include <string.h>
int main()
{
    char str[4];
    int n[3],i,j,a;
    gets(str);
    scanf("%d %d %d",&n[0],&n[1],&n[2]);
    for(i=0; i<n; i++)
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
    if(!(strcmp(str,"ACB")))
        printf("%d %d %d",n[0],n[2],n[1]);
    if(!(strcmp(str,"BAC")))
        printf("%d %d %d",n[1],n[0],n[2]);
    return 0;
}
