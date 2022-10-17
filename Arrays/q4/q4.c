#include<stdio.h>
int main()

	{
		char i[6] = {'1', '2', '3', '4', '5'};

		char s[6];
		
		printf("%s\n",i);

		int a = sizeof(i);

		for(int n=0;n<sizeof(i);n++)
		{
			s[n] = i[a-n-2];
		}

			printf("%s",s);
			
		return 0;
	}
