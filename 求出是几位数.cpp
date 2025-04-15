#include<stdio.h>
int main()
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	if(num>=1&&num<10)
	printf("%d is a one-digit number",num);
	else if(num>=10&&num<100)
	printf("%d is a two-digit number",num);
	else if(num>=100&&num<1000)
	printf("%d is a three-digit number",num);
	else if(num>=1000&&num<10000)
	printf("%d is a four-digit number",num);
	else
	printf("%d is out of a range",num);
	return 0;
}