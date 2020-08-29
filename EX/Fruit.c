#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c=0,d=0;
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lf %lf",&a,&b);
        c += a*b;
    }
    if(c>400)
    {
        d = c*0.1;
        if(d>200)
            printf("\n%.2lf\n",c-200);
        else
            printf("\n%.2lf\n",c-(c*0.1));
    }
    else if(c>200)
        printf("\n%.2lf\n",c-(c*0.05));
    else
        printf("\n%.2lf\n",c);
}
