#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int i,j,d=0,n,m;
    char a[51][51];

    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++)
        scanf("%s",a[i]);

    printf("\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            d = 0;
            if(a[i][j]!='*')
            {
                if(a[i][j+1]=='*')
                    d++;
                if(a[i][j-1]=='*')
                    d++;
                if(a[i+1][j]=='*')
                    d++;
                if(a[i-1][j]=='*')
                    d++;
                if(a[i-1][j+1]=='*')
                    d++;
                if(a[i-1][j-1]=='*')
                    d++;
                if(a[i+1][j+1]=='*')
                    d++;
                if(a[i+1][j-1]=='*')
                    d++;
                printf("%d ",d);
            }
            else printf("* ");
        }
        printf("\n");
    }

}
