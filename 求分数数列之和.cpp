#include<stdio.h>
int main(){
	int m=2;
	int n=1;
	int i;
	float sum=(float)m/n;
	for(i=0;i<=19;i++){
		int temp=m;
		m=m+n;
		n=temp;
		sum=sum+(float)m/n;
	}
	printf("%f",sum);
	return 0;
}