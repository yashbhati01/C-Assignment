#include<stdio.h>
int gcd();
int main()

{
	int a,b,result;

	printf("Enter the two numbers to find their gcd: ");
	scanf("%d%d",&a,&b);
	result = gcd(a,b);
	printf("The gcd of %d and %d is %d.\n", a,b,result);
}

int gcd(int a, int b)
{
	while(a!=b)
	{
		if(a>b)
		{	return gcd(a-b,b);	}
		else
		{	return gcd(a,b-a);	}

	}
	return a;
}
