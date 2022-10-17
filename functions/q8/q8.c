#include<stdio.h>
int factorial();
int find_ncr();
int find_npr();

int main()
	{
		int n,r,ncr,npr;
		printf("Enter the value of n and r\n");
		scanf("%d%d",&n,&r);
		ncr = find_ncr(n,r);
		npr = find_npr(n,r);
		printf("%dC%d = %d\n", n,r,ncr);
		printf("%dP%d = %d\n", n,r,npr);
		return 0;
	}

int find_ncr(int n, int r )
{
	int result;
	result = factorial(n)/(factorial(r)*factorial(n-r));
	return result;
}

int find_npr(int n, int r)
{
	int result;
	result = factorial(n)/factorial(n-r);
	return result;
}

int factorial(int n)
{
	int c;
	int result = 1;
	for(c = 1; c<=n; c++)
		result = result*c;
	return result;
}
