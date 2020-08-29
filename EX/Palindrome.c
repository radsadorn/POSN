#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i,k,c=0,d=1,e=0;
    char a[10000],b[10000];

    gets(a);
    c = strlen(a);
//    strcpy(b,a);
//    strrev(b);
//    c = strcmp(a,b);
    for(i=0;i<c;i++)
        if (a[i]!=a[c-1-i])
            e=1;

    if(e==0)
        printf("Y");
    else
        printf("N");
}
