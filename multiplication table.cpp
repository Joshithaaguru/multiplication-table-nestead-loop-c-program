#include<stdio.h>
int main()
{
	for(int i=1;i<=6;i++){
		for(int j=1;j<=6;j++){
			printf("%d X %d =%d \t",i,j,j*i);
		}
		printf("\n");
	}
	return 0;
}
