#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i,j,a=0,b=0;
    float PQ[5][5],sum,x[5],y[5],dis,min,max;
    for(i=0;i<5;i++)
        scanf("%f%*c%f",&x[i],&y[i]);

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            sum = (x[j]-x[i])*(x[j]-x[i])+(y[j]-y[i])*(y[j]-y[i]);
            PQ[i][j] = sqrt(sum);
            if(i==0&&j==1)
            {
						max = PQ[0][1];
						min = PQ[0][1];
            }
            if (max < PQ[i][j]) max = PQ[i][j];
            if (min > PQ[i][j]) min = PQ[i][j];
        }
    }

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(PQ[i][j]==min)
                a = i+1;
            if(PQ[i][j]==max)
                b = j+1;
        }
    }

    printf("\n%d \n%d\n",a,b);
}
