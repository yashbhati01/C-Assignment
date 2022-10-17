#include<stdio.h>
void fun1();
int main()

	{
		extern int a;
		printf("a = %d",a);
		fun1();
		fun1();
	}

void fun1()
	  {
	  	static int a;
		a += 5;
		printf("\na in function = %d",a);
	  }

int a = 2;
