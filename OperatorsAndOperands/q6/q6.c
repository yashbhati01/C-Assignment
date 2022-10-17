#include<stdio.h>
endian(char* num, int n);
int main()

	{
		int num;
		num =0x12345;
		endian((char *)&num, sizeof(num));
		return 0;
			
	}

endian(char* num, int n)
		{
			for(int i =0;i<n;i++)
				{
				printf(" %.2x",num[i]);
				}
			printf("\n");
		}
