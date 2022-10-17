#include<stdio.h>
int main()
{
		char s;
		printf("Input any character -> ");
		scanf("%c",&s);

		if (s=='A' || s=='a')
			printf("\n\nA for Apple.");

		else if (s=='B' || s=='b')
			printf("\n\nB for Bat.");

		else if (s=='D' || s=='d')
			printf("\n\nD for Dog.");

		else if (s=='F' || s=='f')
			printf("\n\nF for Fan.");

		else 
			printf("\n\nCharacter not in range.");

		return 0;


}
