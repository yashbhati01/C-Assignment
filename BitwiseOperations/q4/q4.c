/*############ Write a program to set a bit at nth position ###########*/

#include<stdio.h>
int bitset();
int a,n;
int main()

	{
	    printf("Enter a number:  ");	
	    scanf("%d",&a);

	    printf("Which position you want to set:  ");
	    scanf("%d",&n);

	    printf("the resultant number is: %d",((1<<n)|a));	

	    return 0;
	}

/*int bitset(int b) 
{
	if(b==0)
		return 0;
	else
		return ((1>>n)|a);
}*/
