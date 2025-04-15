#include<stdio.h>
int main(){
	float sum=100.0;
	int i;
	float n=100.0;
	for(i=1;i<=9;i++){
		n=n/2.0;
		sum=sum+2.0*n;
	}
	printf("%.2f\n",sum);
	return 0;
}