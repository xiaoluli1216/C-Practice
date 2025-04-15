#include<stdio.h>
int main(){
	int a,b,c;
	int i;
	int num;
	for(i=100;i<=999;i++){
		num=i;
		a=num/100;
		b=num/10-a*10;
		c=num%10;
		if(num==a*a*a+b*b*b+c*c*c){
			printf("%d\n",num);
		}
	}
	return 0;
}