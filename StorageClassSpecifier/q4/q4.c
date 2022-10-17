#include<stdio.h>

int main()
	
	{
		register long int a = 10000000000000000;
		a = a+5;
		printf("a = %ld",a);
		{
			auto long int a=111111111111111111;
			printf("\ni = %ld",a);
			{
				printf("\na = %ld",a);
			}
		}
		printf("\na = %ld\n",a);
	}
