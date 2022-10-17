#include<stdio.h>
int main()
{
  int a,b,d;
  char c; 
  printf("Enter 1st number:");
  scanf("\n%d",&a);
  printf("Enter 2nd number:");
  scanf("\n%d",&b);
  printf("Enter the character of operation you want:");
  scanf("\n %c",&c);
  switch(c){
	case '+':
		d=a+b;
		printf("Addition is: %d",d);
		break;
	case'-':
		d=a-b;
		printf("Subtraction is: %d",d);
		break;
	case'*':
		d=a*b;
		printf("Multiplication is: %d",d);
		break;
	case'/':
		d=a/b;
		printf("Division is: %d",d);
		break;
	case'%':
		d=a%b;
		printf("Remainder is: %d",d);
		break;
	default:
		printf("Operator unavailable.");
		break;
	    }	
  return 0;

}
