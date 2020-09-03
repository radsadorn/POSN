#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i,j,a=0,b=0;
    float PQ[5][5],sum,x[5],y[5],c[5],dis,min,max;
    for(i=0;i<5;i++)
        scanf("%f%*c%f",&x[i],&y[i]);

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            sum = pow(x[j]-x[i],2)+pow(y[j]-y[i],2);
            PQ[i][j] = sqrt(sum);
            if(i==0&&j==1)
                    max = PQ[0][1];
            if (max < PQ[i][j])
                max = PQ[i][j];
        }
    }

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(PQ[i][j]==max)
            {
                a = i+1;
                b = j+1;
            }
        }
    }

    printf("\n%d \n%d\n",a,b);
}
