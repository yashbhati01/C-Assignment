#include<stdio.h>
int  main()

	{
		int sum=0;
		float avg=0;

		int arr[10],n,i;

		printf("Enter the no. of elements of array: ");
		scanf("%d",&n);

		printf("Enter the elements: \n");
		for(i = 1; i <= n; i++)
		{
			scanf("%d",&arr[i]);
		}

		for(i=1;i<=n;i++)
		{
		sum = sum + arr[i];
		}

		avg = (sum / n); 

		printf("Sum: %d",sum);
		printf("\nAverage: %.2f",avg);
		return 0;
	}
