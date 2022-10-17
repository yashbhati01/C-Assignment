#include<stdio.h>
#include<string.h>
int main()

	{
		char name[] = {'y', 'a', 's', 'h', ' ', 'b', 'h', 'a', 't', 'i'};

				
		printf("%s\n", name);
		
		printf("size of array: %ld", sizeof(name));
		
		printf("\nLength of array: %ld", strlen(name));
		return 0;
	}
