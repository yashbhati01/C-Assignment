/*write a menu based C program to perform operations(+,-,*)on matrices*/

#include<stdio.h>
int main()
{
	int f;
	int x[2][2];
	int y[2][2];
	int z[2][2];
		
	printf("Array x[2][2] :\n");
	{for(int i = 0; i<2; i++) {
		for(int j = 0; j<2; j++) {
			scanf("%d", &x[i][j]);
		}
		// printf("\n");
	}
	}
	printf("\nArray y[2][2] :\n");
	{for(int i = 0; i<2; i++) {
		for(int j = 0; j<2; j++) {
			scanf("%d", &y[i][j]);
		}
		// printf("\n");
	}
	}
	printf("Enter number for operation:\n 1. for Addition\n 2. for Subtraction\n 3. for multiplication. \n");
	
	printf("Number chosen:");
	scanf("%d", &f);

	switch(f)
	{
	case 1: {for(int i=0;i<2;i++)
		{
			for(int j=0;j<2;j++)
			{z[i][j] = x[i][j] + y[i][j];	}
		}
			for(int i=0;i<2;i++)
				{for(int j=0;j<2;j++)
					{
						printf("%d\t",z[i][j]);
					}
					printf("\n");	
				}
			break;  

		   }
	case 2: {
			for(int i=0;i<2;i++)
			{	for(int j=0;j<2;j++)
				{	z[i][j] = x[i][j] - y[i][j];
				}
			}
				for(int i=0;i<2;i++)
				{	for(int j=0;j<2;j++)
					{	printf("%d\t",z[i][j]);
					}
					printf("\n");
				}
			  break;
		  }

	case 3: {
			for(int i = 0;i<2;i++)
					{	for(int j=0;j<2;j++)
						{	for(int k=0;k<2;k++)
							{	z[i][j] = x[i][k]*y[k][j];

							}
						}
					}
			for(int i=0;i<2;i++)
				{	for(int j=0;j<2;j++)
					{	printf("%d\t",z[i][j]);
			    		}
			    		printf("\n");
		      		}
			
		  break;
		  }
		  
	default: printf("operator not recognized.");
	break;
	}
				
	
	
return 0;
}
