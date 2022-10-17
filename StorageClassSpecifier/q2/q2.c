#include<stdio.h>
void fun1();
int main()
	{
		int a = 2;
		{
		  auto int a = 10;
		  printf("a in auto block = %d",a);
		}
		printf("\na in main block = %d",a);
		fun1();
		fun1();

	}

void fun1()
	  {
	  	static int a;
		a += 15;
		printf("\na in static = %d",a);
	  }
