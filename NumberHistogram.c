#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,k,n,a[40],b[10]={0,0,0,0,0,0,0,0,0,0};

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
            b[0]++;
        else
        {
            while(a[i]>0)
            {
                b[a[i]%10]++;
                a[i] /= 10;
            }
        }

    }
    for(i=0;i<10;i++)
    {
        printf("%d|",i);
        for(k=0;k<b[i];k++)
        {
                printf("*");
        }
        printf("\n");
    }
}
