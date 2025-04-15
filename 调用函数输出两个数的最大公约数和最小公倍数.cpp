#include<stdio.h>
int main()
{
	int gcd(int x,int y);
	int lcm(int x,int y);
	int a,b,m,n;
	printf("enter two numbers:");
	scanf("%d %d",&a,&b);
	m=gcd(a,b);
	n=lcm(a,b);
	printf("%d %d",m,n);
	return 0;
}
int gcd(int x,int y)
{
	while(x%y!=0){
		int temp;
	    temp=y;
	    y=x%y;
	    x=temp;
	}
	return(y);
}
int lcm(int x,int y)
{
	int c=(x*y)/gcd(x,y);
	return(c);
}