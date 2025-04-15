#include<stdio.h>
int main(){
	int num;
	int i;
	int sum;
	for(num=1;num<=1000;num++){
		sum=0;
		for(i=1;i<num;i++){
			if(num%i==0){
				sum=sum+i;
			}
		}
		if(num==sum){
			printf("%d its factors are",num);
			for(i=1;i<num;i++){
				if(num%i==0){
				printf("%d ",i);
				}
			}
			printf("\n");
		}
	}
	return 0;
}