#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,i,sum=0,m=2;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        sum += pow(m*i+1,2);
    }
    printf("\n%d\n",sum);

    return 0;
}
