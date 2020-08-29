#include <stdio.h>
main()
{
	int h;
	
	scanf("%d",&h);
	if (h>=1&&h<=80) {
	for (int i=1;i<=h;i++)
	{
		for (int j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
} else printf("error");
}
