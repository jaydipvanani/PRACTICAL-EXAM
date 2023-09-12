#include<stdio.h>

main()
{
	int temp,a,b,n;
	printf("Enter value :- ");
	scanf("%d",&n);
	
	temp=n;
	
	while(n>0)
	{
		a= n%10;
		b=b*10+a;
		n = n/10;
	}
	printf("rev-num = %d\n",b);
	if(temp==b)
	{
		printf("num is palindrome");
	}
	else
	{	
		printf("num is not palindrome");
	}
	
}
