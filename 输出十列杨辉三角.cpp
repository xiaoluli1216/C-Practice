#include<stdio.h>
int main(){
	int num[10][10];
	for(int i=0;i<=9;i++){
		num[i][i]=1;
		num[i][0]=1;
		for(int j=1;j<i;j++){
			num[i][j]=num[i-1][j-1]+num[i-1][j];
		}
		for(int j=0;j<=i;j++){
			printf("%d ",num[i][j]);
		}
		printf("\n");
    }
	return 0;
}