#include<stdio.h>

int main()
{
	char a;
	printf("Element:  ");
	scanf("%c",&a);
	if(a>=65&&a<97)
		printf("%c",tolower(a));
	else
		printf("%c",toupper(a));

	return 0;

}
