#include<stdio.h>
int a = 33;   // initialized globally
int main()

	{
		printf("a = %d",a);
		int a = 11;    // initialized locally.
		printf("\na = %d",a);
		{
			int a = 22;    // initialized locally.
			printf("\na = %d",a);
			{
				printf("\na = %d\n",a);
			}
		}
	}
