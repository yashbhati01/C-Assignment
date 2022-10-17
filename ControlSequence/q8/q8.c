#include<stdio.h>
int main()
	{
		int i,s,sum=0,temp;
		printf("Enter a number:");
		scanf("%d",&i);
		temp = i;

		while(i>0)
			{	s = i%10;
				sum = (sum*10)+s;
				i = i/10;
			}

		if (temp==sum)
			printf("Palindrome");

		else
			printf("Not Palindrome");

		return 0;
	}
