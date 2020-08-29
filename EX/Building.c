#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j,n,m;

	scanf("%d %d",&n,&m);

         for (i=0; i<=n*4; i++)
              {
                      for(j=0; j<=m*4; j++)
                            {
                                   if(i%4==0)
                                   {
                                        printf("#");

                                   }else if(j%4==0)
                                   {
                                        printf("#");
                                   } else
                                          printf(" ");
                             }
                     printf("\n");
             }
}
