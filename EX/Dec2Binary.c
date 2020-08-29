#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int n,b,i=0,a=0,c=0;
    int num[100];

    scanf("%d",&n);
        do
        {
            num[i] = n%2;
            n /= 2;
            i++;
            a++;
        } while(n>0);
        for(i=a-1;i>=0;i--)
            printf("%d",num[i]);
}
