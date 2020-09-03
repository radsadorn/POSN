#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int a[2][10];
    int i=0,j=0;
    for(i=0;i<2;i++)
    {
        for(j=0;j<10;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(a[0][i]==a[1][j])
            printf("%d\n",a[0][i]);
        }
    }
}
