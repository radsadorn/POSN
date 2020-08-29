#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,j,c=0,d=0;
    scanf("%d %d",&a,&b);
    for(;a<=b;a++)
    {
        d=0;
        for(j=2;j*j<=a;j++)
        {
            if(a%j==0)
                d++;
        }
        if(d==0)
            c++;

    }

    printf("\n%d\n\n",c);

    return 0;
}
