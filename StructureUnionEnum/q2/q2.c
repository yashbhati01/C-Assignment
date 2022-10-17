#include<stdio.h>

struct check1{
		int n,o,p;
		char m[20];	
	     }c1;

union check2{
		int j,l;
		char k[10];
	    }c2;

int main()

	{
		printf("Size of Structure: %ld",sizeof(c1));  //it will print 32 

		printf("\nSize of Union: %ld\n",sizeof(c2));  //it will print 12

		return 0;
	}
