#include<stdio.h>
int main(){
	int i;
	float n=1.0;
	float sum=0.0;
	for(i=9;i>=1;i--){
		n=(n+1)*2;
	}
	sum=n;
	printf("%f\n",sum);
	return 0;
}