#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d,n,i=1,k,m=0;

    scanf("%d %d",&n,&d);
    do{
        for(k=d;k<=7;k++)
        {
            if(k==3)
            {
                if(i%2==1) m += 3;//ÇÑ¹¾Ø¸ÇÑ¹·Õè¤Õè
                else       m += 5;
            }
            else if(k==5)
            {
                if(i%2==1) m += 2;//ÇÑ¹ÈØ¡ÃìÇÑ¹·Õè¤Õè
                else       m += 5;
            }
            else if(k==7)
            {
                d = 1;
                m += 5;
            }
            else m +=5;

            if(i==n)
            {
                printf("\n%d\n",m);
                return 0;
            }
            i++;
        }
    } while(i<=n);
}
