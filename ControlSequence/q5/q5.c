/*sum of odd numbers upto n using while loop*/

#include<stdio.h>
int main()

	{
		int num,count=1,sum=0;

		printf("Enter digit: ");
		scanf("%d", &num );
		
		while( count <= num )
		{
			if( count%2 != 0 )

			{
			    sum = sum + count;
			}

			count++;
		}
		
		printf("%d\n",sum);
		
		return 0;
			
	}
