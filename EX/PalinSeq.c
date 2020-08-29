#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i,k,c=0,d=0,m=0;
    char a[10000],b[10000],e[10000];

    gets(a);
    c = strlen(a);

    for(i=0;i<c;i++)
    {
        a[i] = tolower(a[i]);
        if(a[i]>='a'&&a[i]<='z')
        {
            e[m] = a[i];
            m++;
        }
    }
    for(i=0;i<m;i++)
        if (e[i]!=e[m-1-i])
            d=1;
//    strcpy(b,e);
//    strrev(b);
//    c = strcmp(e,b);
    if(d==0)
        printf("Y");
    else
        printf("N");
}
