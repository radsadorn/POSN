#include <stdio.h>

int main()
{
	int i,j,num;
	char key;
	
	scanf("%c",&key);
	scanf("%d",&num); 
	
	do{
         for (i=1; i<=num; i++)
              {
                      for(j=1; j<=num; j++)
                            {
                                   if(i==1)
                                   {
								   	 		printf("%c",key);
                                   } else if(i==num)
                                   {
								   	 		printf("%c",key);
                                   } else if(j==1)
                                   {
								   	 		printf("%c",key);
                                   } else if(j==num)
                                   {
								   	 		printf("%c",key);
                                   } else
                                          printf(" ");
                             }
                     printf("\n");
             }
	} while (num<3&&num>20);
}

