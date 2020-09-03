#include <stdio.h>
int main()
{
		int x,min,max,j,n,total;
		scanf("%d",&n);
		for (j=0;j<n;j++) 
		{
				scanf("%d",&x);
				if (j==0) 
				{
						max = x;
						min = x;
				}
				if (max < x) max = x;
				if (min > x) min = x;
		}
		printf("\n%d ",min);
		printf("%d ",max);
		//total = x;
		//printf("%d",total);
}
