#include<stdio.h>
int bitset();
int main()

	{
		int a;
		printf("Enter number: ");
		scanf("%d",&a);
		
		printf("The number of bits are: %d\n", bitset(a));
		return 0;
	}
		int bitset(int b)
		{
			if(b==0)
				return 0;

			else
				return ((b&1) + bitset(b>>1));
		}
		

