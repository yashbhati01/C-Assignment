/*############ Check if the bit at nth position*/

#include<stdio.h>
int main()

	{
		int a,n,b;
		printf("Enter the number: ");
		scanf("%d",&a);

		printf("Which position to check bit is set: ");
		scanf("%d",&n);

//		b = a&(1<<n);
//		printf("%d",b);
		if(a&(1<<n))
			printf("The bit is set.\n");
		else
			printf("The bit is not set\n");
		return 0;
	}
