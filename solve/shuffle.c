#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i,a[100],b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&m);

    b = m%n;
    for(i=b;i<n;i++)
        printf("%d ",a[i]);
    for(i=0;i<b;i++)
        printf("%d ",a[i]);
}
