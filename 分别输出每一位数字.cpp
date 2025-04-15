#include<stdio.h>
int main()
{
	int a,b,c,d;
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	if(num>=0&&num<10)
	printf("%d",num);
	else if(num>=10&&num<100){
		a=num/10;
		b=num%10;0
		printf("%d %d",a,b);
	}
	else if(num>=100&&num<1000){
		a=num/100;
		b=num/10-a*10;
		c=num%100;
		printf("%d %d %d",a,b,c);
	}
	else if(num>=1000&&num<10000){
		a=num/1000;
		b=num/100-a*10;
		c=num/10-a*100-b*10;
		d=num%1000;
		printf("%d %d %d %d",a,b,c,d);
	}
	else
	printf("I don't know");
	return 0;
}