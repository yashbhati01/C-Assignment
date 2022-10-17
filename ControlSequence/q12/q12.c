#include<stdio.h>
int main()

	{
		int i,n,sum,count=0;
		printf("Enter number: ");
		scanf("%d",&i);
		

		for(n=1;n<=i;n++)
		{
			if(i%n==0){
				count++;}
			
		}
		if(count==2)
			printf("%d is a Prime number",i);
		else
			printf("Not a prime number");

		
		return 0;
	}
