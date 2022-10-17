#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("***************Operations on Complex Equation(x+iy)***************\nEquation I: Real number(x): ");
	scanf("%d",&a);
	printf("\n\t  Imaginary number(i):");
	scanf("%d",&b);
	printf("\nEquation  II: Real number(x): ");
	scanf("%d",&c);
	printf("\n\t  Imaginary number(i): ");
	scanf("%d",&d);
	e = a+c;
	f = b+d;
	printf("\nAddition of Equation I & II: %dx+%di\n",e,f);

	return 0;
}
