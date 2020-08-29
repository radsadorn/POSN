#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int a,b,x,y,n[3],m[3],i;
    scanf("%d %d",&x,&y);
    scanf("%d %d",&a,&b);
    for(i=0;i<3;i++)
        scanf("%d %d",&n[i],&m[i]);

    for(i=0;i<3;i++)
    {
        if(n[i]>=x&&n[i]<=a&&m[i]>y)
            printf("N\n");
        else if(n[i]>a&&m[i]>y)
            printf("NE\n");
        else if(n[i]>a&&m[i]>=b&&m[i]<=y)
            printf("E\n");
        else if(n[i]>a&&m[i]<b)
            printf("SE\n");
        else if(n[i]>=x&&n[i]<=a&&m[i]<b)
            printf("S\n");
        else if(n[i]<x&&m[i]<b)
            printf("SW\n");
        else if(n[i]<x&&m[i]<=y&&m[i]>=b)
            printf("W\n");
        else if(n[i]<x&&m[i]>y)
            printf("NW\n");
        else
            printf("CENTRAL\n");
    }
}
