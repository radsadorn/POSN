#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\n");
    for(i=0;i<n;i++)
    {
        if(a[i]<=2558)
            printf("%d\n",2558-a[i]);
        else
            printf("NULL\n");
    }
}
