#include<stdio.h>
void swap();

void swap(int *a,int *b)
	{
		int temp;
		temp = *a;
		*a = *b;
		*b = temp;
		printf("a = %d\tb = %d",*a,*b);
	}

int main()

{
	int i,j;
	i = 22;
	j = 44;
	swap(&i,&j);
	return 0;
}
