#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int i,h,n,sum=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&h);
        sum += (h/n);

    }
    printf("\n%d\n",sum);

    return 0;
}
