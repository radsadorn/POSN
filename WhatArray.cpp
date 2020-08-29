#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main()
{
    char str[1000000];
    int c,a=0,r=0,y=0,min,i;
    gets(str);
    c = strlen(str);

    for(i=0;i<c;i++)
    {
        if(str[i]=='a')
            a++;
        else if(str[i]=='r')
            r++;
        else if(str[i]=='y')
            y++;
    }
    a/=2;
    r/=2;
    min = a;
    if(r<min) min=r;
    if(y<min) min=y;

    cout<<min;
}
