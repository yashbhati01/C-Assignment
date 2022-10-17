#include<stdio.h>
//static int a = 11; it will print the value 11
int main()

	{
		static int a = 11; //it will print the value 11
		{
			printf("a = %d",a);
		}
		return 0;
	}
		

//No error or warning will be shown in above both cases.
