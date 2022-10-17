#include<stdio.h>
		
	struct time
	{
		int hour;
		int minute;
		int second;
	 }t;

int main()
	{
	

	
		printf("Enter hour: ");
		scanf("%d",&t.hour);
		printf("Enter minute: ");
		scanf("%d",&t.minute);
		printf("Enter second: ");
		scanf("%d",&t.second);
		printf("Time of the day is: %d:%d:%d\n",t.hour,t.minute,t.second);
		return 0;
	}
