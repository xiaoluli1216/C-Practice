#include<stdio.h>
int main(){
	int num[10];
	printf("enter 10 numbers:");
	for(int i=0;i<=9;i++){
		scanf("%d",&num[i]);
	}
	for(int i=0;i<9;i++){
		int k=i;
		for(int j=i+1;j<10;j++){
			if(num[j]<num[k]){
				k=j;
			}
		}
		if(k!=i){
			int temp=num[i];
			num[i]=num[k];
			num[k]=temp;
		}
	}
	for(int i=0;i<10;i++){
		printf("%d ",num[i]);
	}
	printf("\n");
	return 0;
}