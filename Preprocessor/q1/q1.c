					//Factorial using multi line macro
#include<stdio.h>

#define factorial(a) for(int i = 1;i<=a;i++)\
		b = b*(i);\
		printf("%d",b);\

int main()

	{
		int a,b=1;
		printf("Enter number: ");
		scanf("%d",&a);
		factorial(a);
		return 0;
	}
