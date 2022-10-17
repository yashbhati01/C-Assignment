#include<stdio.h>
int main()

	{
		int a,n;
		printf("Enter number: ");
		scanf("%d",&a);

		printf("Toggle bit on position: ");
		scanf("%d",&n);

		printf("The resultatnt value is: %d", (a^(1<<n)));
		return 0;
	}
