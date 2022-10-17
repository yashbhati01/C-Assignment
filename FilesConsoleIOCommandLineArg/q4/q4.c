/*######### Print on console. #########*/

#include<stdio.h>
int main()
	{
		FILE *fp;
		char ch[50];
		fp = fopen("file.txt","w+");

		fputs("This is a file program!!",fp);
		if(fp==NULL)
		{perror("error");
		return -1;
		}
		rewind(fp);
		while(fgets(ch,50,fp)!=NULL)
		{
		fputs(ch,stdout);
		}
		fclose(fp);		
	}
