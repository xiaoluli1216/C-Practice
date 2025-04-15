#include<stdio.h>
#include<math.h>
int main()
{
	double a,b;
	double t;
	int height=0;
	printf("enter the position:");
	scanf("%lf %lf",&a,&b);
	t=(a-2)*(a-2)+(b-2)*(b-2);
	if(t<=1)
	height=10;
	t=(a+2)*(a+2)+(b-2)*(b-2);
	if(t<=1)
	height=10;
	t=(a-2)*(a-2)+(b+2)*(b+2);
	if(t<=1)
	height=10;
	t=(a+2)*(a+2)+(b+2)*(b+2);
	if(t<=1)
	height=10;
	printf("%d",height);
	return 0;
}