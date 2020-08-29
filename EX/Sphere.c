#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415926535897932384626433

int main()
{
    int r;
    double dis;
    scanf("%d",&r);
    dis = (4*PI*r*r*r)/3;
    printf("\n%.8lf",dis);
}
