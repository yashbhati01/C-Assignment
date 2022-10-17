#include<stdio.h>
int main()
{
        float a,b,c,d;
	printf("**********Program to calculate Simple Interest**********\nEnter the Principle amount(Rs): ");
	scanf("%f",&a);
	printf("\nEnter Time period(in years): ");
	scanf("%f",&b);
	printf("\nEnter the Interest rate: ");
	scanf("%f",&c);
	d = a*b*c/100;
	printf("\nSimple Interest: %.2f\n",d);
	return 0;

}
