#include<stdio.h>
#include<math.h>
int main(){
	double a,xn,xn1,temp;
	printf("enter the number:");
	scanf("%lf",&a);
	xn=a;
	do{
		xn1=0.5*(xn+a/xn);
		temp=xn;
		xn=xn1;
		xn1=temp;
	}
	while(fabs(xn1-xn)>=1e-5);
	printf("sqrt(%.6lf)=%.6lf",a,xn1);
	return 0;
}