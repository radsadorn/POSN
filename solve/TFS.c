#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m=0,i;
    scanf("%d",&n);
    for(i=3;i<=7;i+=2)
    {
        if(n%i==0)
        {
            if(i==3)
                m+=1;
            else if(i==5)
                m+=2;
            else
                m+=4;
        }
    }
    for(i=0;i<=7;i++)
    {
        if(m==i)
        printf("%d",i);
    }
}
