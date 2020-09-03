#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j,n,m[40];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&m[i]);
    for(j=0;j<9;j++)
    {
        printf("%d|",j+1);
        for(i=0;i<n;i++)
        {
            if(m[i]==j+1)
                printf("*");
            else
                printf("");
        }
        printf("\n");
    }
}
