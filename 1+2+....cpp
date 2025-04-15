#include<stdio.h>
int main(){
	int a=0;
	int b;
	float c;
	int i;
	int sum1=0,sum2=0;
	float sum3=0;
	for(i=1;i<=100;i++){
		a=a+i;
		sum1=sum1+a;
	}
	for(i=0;i<=50;i++){
		b=i+1;
		sum2=sum2+b*b;
	}
	for(i=1;i<=10;i++){
		c=1.0/i;
		sum3=sum3+c;
	}
	printf("%f",sum1+sum2+sum3);
	return 0;
}