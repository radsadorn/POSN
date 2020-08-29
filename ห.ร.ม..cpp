#include <stdio.h>
#include <conio.h>

int main()

{
    int A, B, start;

    scanf("%d\n %d", &A, &B);
    {
        if(A < B) start = A;
        else start = B;
    }
    while(((A%start) != 0)||((B%start) != 0))
    {

        start = start-1;
    }
    printf("%d %d",start,start*(A/start)*(B/start));
}
