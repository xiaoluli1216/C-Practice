#include<stdio.h>
int main(){
	int i;
	int num[5]={8,6,5,4,1};
	for(i=0;i<=4;i++){
		printf("%d ",num[4-i]);
	}
	return 0;
}