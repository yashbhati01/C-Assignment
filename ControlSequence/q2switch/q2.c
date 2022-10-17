#include<stdio.h>
int main()
{
	char c;
	printf("Enter the choice of your character -> ");
	scanf("%c",&c);

	switch(c)
	{
		case 'A': printf("\nA for APPLE\n.");
			  break;

		case 'a': printf("\nA for APPLE\n.");
			  break;

		case 'B': printf("\nB for BALL\n.");
			  break;

		case 'b': printf("\nB for BALL\n.");
			  break;

		case 'D': printf("\nD for DOG\n.");
			  break;

		case 'd': printf("\nD for DOG\n.");
			  break;

		case 'F': printf("\nF for Fan\n.");
			  break;

		case 'f': printf("\nF for Fan\n.");
			  break;

		default: printf("\nCharacter is not in range.\n");
		 	 break;	 
	}
}
