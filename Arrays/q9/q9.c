#include<stdio.h>
int main()
	{
		int a,b;
		char arr[5] = {'1', '2', '3', '4', '\0'};
		printf("Current array--> ");
		for(int k=0;k<=5;k++){
			printf("%c\t",arr[k]);
		}

		printf("\nEnter the position to remove elment: ");
		scanf("%d",&a);

		arr[a] = 0;
		printf("Updated array--> ");
		{
			for(int i=0;i<=5;i++)
				printf("%c\t",arr[i]);
		}
		printf("\n");
		return 0;
	}
