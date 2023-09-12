#include<stdio.h>

main()

{
	int j,i,count=0;
	
	for(i=1;i<=5;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d",count);
			count++;
		}
		printf("\n");
	}
}
