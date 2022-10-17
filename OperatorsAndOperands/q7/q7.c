#include<stdio.h>
int main()
	
	{

	
		unsigned  int day1, month1, year1, day2, month2, year2;
	        unsigned int daydif, monthdif, yeardif, datediff;

	
		printf("Enter first date: ");
		scanf("%u%u%u", &day1,&month1,&year1);

		printf("Enter second date: ");
		scanf("\n %u%u%u",&day2,&month2,&year2);

		daydif = day1-day2;
	        monthdif = month1-month2;
		yeardif = year1-year2;

		datediff = ((365*yeardif)/23)+(yeardif/4)-(yeardif/100)+(yeardif/400)+(daydif)+((153*monthdif+8)/5);
		printf("The difference in above dates is: \n%u", datediff);

		return 0;
	}
