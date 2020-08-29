#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[51][51];
    char r[51][51];
    int i,k,w,h,x,y,d;
    scanf("%d %d",&w,&h);
    for(i=0;i<=h;i++)
        for(k=0;k<w;k++)
            scanf("%c",&a[i][k]);

    for(i=0;i<h;i++)
    {
        for(k=0;k<w;k++)
        {
            d = 0;
            if(a[i][k]!='*')
            {
                if(i!=0&&k!=0&&a[i][k+1]=='*')
                    d++;
                if(i!=0&&k!=0&&a[i][k-1]=='*')
                    d++;
                if(i!=0&&k!=0&&a[i+1][k]=='*')
                    d++;
                if(i!=0&&k!=0&&a[i-1][k]=='*')
                    d++;
                if(i!=0&&k!=0&&a[i-1][k+1]=='*')
                    d++;
                if(i!=0&&k!=0&&a[i-1][k-1]=='*')
                    d++;
                if(i!=0&&k!=0&&a[i+1][k+1]=='*')
                    d++;
                if(i!=0&&k!=0&&a[i+1][k-1]=='*')
                    d++;
                printf("%d ",d);
            }
            else printf("* ");
        }
        printf("\n");
    }

}
