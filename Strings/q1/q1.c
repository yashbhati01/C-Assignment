/*######################## Convert lower case string to upper case string and vice versa ####################*/
#include<stdio.h>
#include<string.h>
int main()   
 	{
		char str[50];
		int i;
		printf("Enter a string:  ");
		gets(str);

		for(i=0; str[i]!='\0'; i++)
		{
			if(str[i] >= 'a' && str[i] <= 'z') 
			{
				str[i] = str[i] - 32;
			}
				
			else if(str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = str[i] + 32;  
			}
		}

		printf("\nString is: %s",str);
		return 0;
	} 
