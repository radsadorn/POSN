#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char a[200],e[200];
    int i,k,c=0,d=1,m=0;
    gets(a);
    c = strlen(a);
    for(i=0;i<c;i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
        {
            a[i] = tolower(a[i]);
        }
        else if(a[i]>='a'&&a[i]<='z')
        {
            a[i] = toupper(a[i]);
        }
        printf("%c",a[i]);
    }
}
