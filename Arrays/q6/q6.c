#include<stdio.h>
int main()

	{
		int arr[10],l1=0,l2=0,s1=0,s2=0;
		printf("Enter element in array: ");
		for(int i =0;i<10;i++){
			scanf("%d",&arr[i]);
		}

		for(int i=0;i<10;i++){
			if(l1<arr[i])
			{
				l1 = arr[i];

			}
		
		}
		printf("\nLargest number: %d",l1);

		for(int i=0;i<10;i++){
			if(l1==arr[i])
			{
				continue;
			}
			else if(l2<arr[i])
			{
				l2 = arr[i];
			}


		}
		printf("\nSecond largest number: %d",l2);
		
		s1=l1;
		for(int i=0;i<10;i++){ 
			if(s1>arr[i])
			{
				s1=arr[i];
			}
		}
		printf("\nSmallest number: %d",s1);
	
		s2=l1;	
		for(int i=0;i<10;i++)
			{
				if(s1==arr[i])
					{
					      	continue;
					}
				else if(s2>=arr[i])
				{
					s2 = arr[i];
				}
			}printf("\nSecond smallest: %d",s2);
			

	}



		
