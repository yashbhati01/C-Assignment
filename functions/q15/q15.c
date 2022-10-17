/*#################### Functions of calculator: Multiplication,Division,Factorial(rec),Squares #################*/

#include<stdio.h>

void multiplication();
void division();
int factorial();
void square(int z);

int main()

	{
		int c;
		printf("******************CALCULATOR**************************");

		
		printf("\nWhat operation you want to do, select by pressing: \n1. Multiplication\n2. Division\n3. Factorial \n4. Square\n");
		scanf("%d",&c);

		

		switch(c)
		{
			case 1: {
					int a,b;
					printf("Enter 1st number: ");
					scanf("%d",&a);

					printf("\nEnter 2nd number: ");
					scanf("%d",&b);

					multiplication(a,b);
				}
					break;

			case 2: {
					int a,b;
					printf("Enter 1st number: ");
					scanf("%d",&a);

					printf("\nEnter 2nd number: ");
					scanf("%d",&b);
					division(a,b);
				}
					break;

			case 3: {
					int a;
					printf("Enter a number: ");
					scanf("%d",&a);
					printf("Factorial: %d",factorial(a));
				}
				break;

			case 4: {
					int c;
					printf("Enter number: ");
					scanf("%d",&c);
					square(c);
				}
				break;

			default : printf("Operation not identified. Select again.\n");
				  break;

		}
		
		return 0;
	}

void multiplication(int d, int e)
{
	int f = d*e;
	printf("\nMultiplied value: %d\n",f);
}

void division(int g, int h)
{
	int f=g/h;
	printf("Division is: %d\n",f);
}

int factorial(int i)
{
	if(i==0)
	return 1;
	else
	return i=i*factorial(i-1);
}

void square(int z)
{
	printf("Square of the number is: %d\n",z*z);	
}
