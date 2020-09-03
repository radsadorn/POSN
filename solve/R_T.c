#include <stdio.h>
#include <conio.h>

int gcd ( int a, int b )
{
  int c;
  while ( a != 0 ) {
     c = a; a = b%a;  b = c;
  }
  return b;
}
int main()

{
    long r, t, s,c;

    scanf("%ld %ld", &r, &t);
    c = gcd(r,t);
//    {
//        if(r < t) s = r;
//        else s = t;
//    }
//    while(((r%s) != 0)||((t%s) != 0))
//    {
//
//        s--;
//    }
    printf("%ld %ld",r/c,t/c);
}
