#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;

    scanf("%d",&n);
    if (n>=20&&n<40)
        printf("1");
    else if (n>=40)
        printf("%d",(n/20-2)*4+3);

}
