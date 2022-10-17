/*wap which adds all numbers from 1 to N except those which are divisible by 5. Implement using for loop and continue statement.*/

#include<stdio.h>

int main()
{
	int i,n,l=0;
	printf("Enter number -> ");
	scanf("%d",&n);		

	for(i=1;i<=n;++i)
	{

		printf("%d\n",i);	
		
		if(i%5==0)
			i = l;
		else
			printf("");

		
	}
	l = i*(i-1)/2;

	 printf("Sum of %d numbers is: %d\n",n,l);



	return 0;
}
