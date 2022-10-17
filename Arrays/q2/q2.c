#include<stdio.h>
int main()

	{
		int a;
		char text[80];
		printf("Enter how many elements you want in array text[]: ");
		scanf("%d",&a);
		printf("Enter Alphabets: ");
		for(int i=0;i<=a;i++){
			scanf("%c",&text[i]);
		}
		
		int count1=0,count2=0,count3=0;	
		for(int i=0;i<=a;i++)
		{      

			if( (text[i]>='a') && (text[i]<='z')||(text[i]>='A') && (text[i]<='Z')) 
			{	
			        count1++;
			}
			else if((text[i]>='0')&&(text[i]<="10"))
			{
				count2++;
			}
			else
			{	if((text[i]==' ') || (text[i]=='\t'))
				count3++;
			}
		}		

		printf("\nNo. of alphabets = %d, \nNo. of numbers = %d,\nNo. of tabs and space = %d\n",count1,count2,count3);
		

		return 0;
	}
