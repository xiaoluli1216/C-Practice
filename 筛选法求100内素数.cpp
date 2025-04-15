#include<stdio.h>
int main(){
	int num[100];
	int i;
	
	for(i=0;i<=99;i++){
		num[i]=i+1;
	}
	for(i=0;i<=99;i++){
		int j=2;
		while(j*j<=num[i]){
			if(num[i]%j==0){
				break;
			}
			j++;
		}
		if(j*j>=num[i]&&num[i]>1){
			printf("%d is a prime number\n",num[i]);
		}	
	}
	return 0;
}