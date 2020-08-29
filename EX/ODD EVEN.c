#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0)
        printf("\n%d\n",n*n);
    else
        printf("\n%d\n",n*n*n);
}
