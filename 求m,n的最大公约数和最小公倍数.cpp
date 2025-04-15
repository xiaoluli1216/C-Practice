#include<stdio.h>
int gcd(int a,int b);
int lcm(int a,int b);
int main()
{
	int m,n;
	printf("enter two numbers:");
	scanf("%d %d",&m,&n);
	printf("the max is %d\n",gcd(m,n));
	printf("the min is %d",lcm(m,n));
}
int gcd(int a,int b){
	while(b!=0){
		int temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}
int lcm(int a,int b){
	return (a*b)/gcd(a,b);
}