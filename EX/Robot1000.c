#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int x=0,y=0,i=0;
    char string[100];

    scanf("%s",string);
    for(;string[i]!=NULL;i++)  // NULL = \0
    {
        switch(string[i])
        {
            case 'N' : y++; break;
            case 'S' : y--; break;
            case 'E' : x++; break;
            case 'W' : x--; break;
            case 'Z' : y=0; x=0; break;
        }
    }

    printf("\n\%d %d\n",x,y);

    return 0;
}
