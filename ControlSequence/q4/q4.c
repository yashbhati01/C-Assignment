/*Factorial of a number N using for loop.*/

#include<stdio.h>
int main()
	{
		int i,fact=1,num;
		printf("Factorial of: ");
		scanf("%d", &num);

		for(i=1;i<=num;i++)
		{
			 fact = fact*i;
		}
		printf("Factorial is: %d ",fact);

	return 0;
	}
