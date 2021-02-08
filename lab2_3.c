#include <stdio.h>
#include <math.h>
int main()
{
    char str[4];
    int n[3],i,j,a;
    scanf("%d %d %d",&n[0],&n[1],&n[3]);
    gets(str);
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
    return 0;
}
