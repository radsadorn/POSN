#include <stdio.h>
#include <stdlib.h>

int main()
{
    double w,h,bmi=0;
    scanf("%lf %lf",&w,&h);
    bmi = w/(h*h/10000);
    printf("\n%.6lf",bmi);
    if(bmi>=30)
        printf("\nObesity\n");
    else if(bmi>=25)
        printf("\nOverweight\n");
    else if(bmi>=18.5)
        printf("\nNormal\n");
    else if(bmi<18.5)
        printf("\nUnderweight\n");
}
