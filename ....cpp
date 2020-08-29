#include <stdio.h>
#include <conio.h>

int main()

{
    int i,n,c[100000],start,sum=0,x=0,y;

    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&c[i]);
        if(i==0) start=c[i];
        if(c[i]<start) start=c[i];
        x=x+c[i];
        
    }
    for(i=0;i<n;i++)
    {
    	while((c[i]%start) != 0)
    	{

        	start = start-1;
    	}
	}
	
	printf("%d\n",x/start);
}
