#include <stdio.h>
#include <stdlib.h>

int main()
{
    float PQ=0,sum,x1,x2,y1,y2;
    scanf("%f%*c%f",&x1,&y1);
    scanf("%f%*c%f",&x2,&y2);
    sum = (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    PQ = sqrt(sum);
    printf("\n%f\n",PQ);
}
