#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=4;i++){
		for(j=4-i;j>=0;j--){
			printf(" ");
		}
		for(int k=2*i-1;k>0;k--){
			printf("*");
		}
		printf("\n");
	}
	for(i=3;i>=0;i--){
		for(j=4-i;j>=0;j--){
			printf(" ");
		}
		for(int k=2*i-1;k>0;k--){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}