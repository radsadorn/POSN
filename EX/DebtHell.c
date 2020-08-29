#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{

    float m,n,a=0;
    scanf("%f %f",&m,&n);
    a = (m-n)+(m-n)*0.05;
    do
    {
        printf("\n%.2f",a);
        a = (a-n)+(a-n)*0.05;
    }
    while(a >= 0);

    printf("\n0.00\n\n");

    return 0;

}
