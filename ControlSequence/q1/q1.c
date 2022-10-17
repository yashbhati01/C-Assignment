#include<stdio.h>
int main()
{
	int i,j;

	printf("Enter value of i: ");
	scanf("%d",&i);
	printf("\nEnter value of j: ");
	scanf("%d",&j);

	if((i==20)||(j==20))
		printf("Atleast one variable is 20.");

	else if((i<=20)||(j<=20))
		printf("Both variables are not having 20.");

	else if((i<=40)||(j<=40))
		printf("Both are less then or equal to 40.");

	else if((i<=40)&&(j<=40))
		printf("Both are not less than or equal to 40.");

	else
		printf("Both are greater than or equal to 40.");

	return 0;
}
