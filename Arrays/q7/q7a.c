#include<stdio.h>
int main()
	{
		int a[5], b[5],n,i,j;
		printf("Enter size elements:");
		scanf("%d",&n);

		printf("Enter elements: ");
		for(i=0; i <= n; i++)
		{
			scanf("%d",&a[i]);
		}
		for (i = n-1, j=0;i>=0;i--,j++)
		{b[j] = a[i];}
		printf("original\t--> copy: \n");
		for(i=0; i < n; i++)
		{		printf("%4d\t\t\-->%6d\n",a[i],b[i]);
		}
		return 0;
	}
