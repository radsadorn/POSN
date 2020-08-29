#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,k,n,a[40],b[100000],m=0;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        do
        {
            b[m] = a[i]%10;
            m++;
        } while (b[m]/10>0)
    }
    for(i=0;i<10;i++)
    {
        printf("%d|",i);
        for(i=0;i<m;i++)
        {
            if(b[m]==i)
                printf("*");
        }
        printf("\n");'
    }

}
