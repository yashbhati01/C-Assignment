#include<stdio.h>

int main()

	{
		int a,n;

		printf("Enter number: ");
		scanf("%d",&a);

		printf("Position to clear bit: ");
		scanf("%d",&n);

		printf("The resultant bit is: %d",~(1<<n)&a);

		return 0;
	}
