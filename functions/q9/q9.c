#include<stdio.h>
void trans();

void trans()
	{
		int mat[2][2],trans[2][2];
		printf("Elements:  ");
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				{
					scanf("%d",&mat[i][j]);
				}
			}
		}
	
	
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++)
				{
					printf("%d\t",mat[i][j]);
				}
				printf("\n");
			
		}
		
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				trans[j][i]=mat[i][j];
			}
		}
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				printf("%d\t",trans[i][j]);
			}
			printf("\n");
		}
	}

int main()

	{
		trans();
		return 0;
	}
