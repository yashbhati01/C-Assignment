#include<stdio.h>
int main()

	{
		int a,m,sum=0;
		printf("Enter a number:");
		scanf("%d",&a);
		while (a>0)
		{
			m = a % 10;
			sum = sum + m;
		        a = a/10;	
		}
	printf("Sum: %d\n",sum);
	
	return 0;
	}
