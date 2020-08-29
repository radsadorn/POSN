#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int a,b,i=1,m=1;
    scanf("%d%d",&a,&b);
    for(;((a+b)/m)>=10;m*=10,i++);
    printf("%d",i);
}
