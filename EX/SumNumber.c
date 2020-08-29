#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int x,i=0;
    float sum=0;
    do
    {
        scanf("%d",&x);
        if(x>=1&&x<=20)
        {
            sum +=x;
            ++i;
        }
        else { sum+=0; }
    } while(sum<100);

    printf("\n\n%.2f\n\n",sum/i);



    return 0;
}
