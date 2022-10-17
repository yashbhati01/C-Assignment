			// Armstrong number
#include<stdio.h>
int main()
	{
		int a,temp,remainder,result=0;
		printf("Enter three digit number: ");
		scanf("%d",&a);
		temp = a;

		while(temp!=0){
			remainder = temp%10;
		

		result += remainder*remainder*remainder;
		temp/=10;
		}

		if(result==a)
			printf("Armstrong number");
		else
			printf("Not Armstrong number");
			
			
	}
