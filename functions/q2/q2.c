#include<stdio.h>
int fact(int i){

	if(i>=1)
	  i = i * fact(i-1);
	
	}
int main()
	{
		int a;
		printf("Enter number:");
		scanf("%d",&a);
		fact(a);

		return 0;
	}
