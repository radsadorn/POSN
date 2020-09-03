#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int a[2],b[2],e,i;
    char c[2];
    scanf("%d",&e);

    for(i=0;i<2;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
        if (e==a[i]+b[i])
            c[i] = '+';
        else if (e==a[i]-b[i])
            c[i] = '-';
        else if (e==a[i]*b[i])
            c[i] = '*';
        else
            c[i] = '/';
    }
    printf("%c\n%c\n",c[0],c[1]);

}
