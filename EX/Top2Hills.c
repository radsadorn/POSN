#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int i,n,h1,h2,h;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&h);
        if(i==1)
            h1=h;
        else if(h>h1)
        {
            h2 = h1;
            h1 = h;
        }
        else if(h>h2)
            h2 = h;

    }
    printf("\n%d\n%d\n\n",h1,h2);

}

