#include<stdio.h>
#include<math.h>
int main()
{
	void answer2(int x1,int x2);
	void answer1(int x1,int x2);
	void answer0(int x1,int x2);
	int a,b,c,d;
	printf("enter 3 numbers:");
	scanf("%d %d %d",&a,&b,&c);
	d=b*b-4*a*c;
	float m=(-b+sqrt(d))/2*a;
	float n=(-b-sqrt(d))/2*a;
	if(d>0){
		answer2(m,n);
	}
	else if(d=0){
		answer1(m,n);
	}
	else
	{
		answer0(m,n);
	}
	return 0;
}
void answer2(int x1,int x2)
{
	printf("%d %d",x1,x2);
}
void answer1(int x1,int x2)
{
	printf("%d",x1);
}
void answer0(int x1,int x2)
{
	printf("no");
}