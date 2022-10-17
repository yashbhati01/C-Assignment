#include<stdio.h>
int fact();
int fact(int a)
{
	int n;
	if(a==1)
		return 1;
	else
		return  a*fact(a-1);
}

int main()

	{
		float b;

		for(float i=1.0;i<=7.0;i++)
		{
				if(i==1)
				{b = b+i/fact(i);}
				else if(i==2)
				{b = b+i/fact(i);}
				else if(i==3){
				b = b+(-i/fact(i));}
				else if(i==4)
				b = b+i/fact(i);
				else if(i==5)
				b = b-i/fact(i);
				else if(i==6)
				b = b+i/fact(i);
				else if(i==7)
				b = b-i/fact(i);							
		}

		printf("%.3f\n",b);
		return 0;
	}
