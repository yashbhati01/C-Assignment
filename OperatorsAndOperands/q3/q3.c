#include<stdio.h>
int main()
{
	double a,b,c;
	printf("*************Comparision of numbers*************\nEnter first number: ");
	scanf("%lf",&a);
	printf("\nEnter second number: ");
	scanf("%lf",&b);
	c = a>b?a:b;
	printf("\n**************************************\nGreatest number is: %lf\n",c);
	return 0;
}
