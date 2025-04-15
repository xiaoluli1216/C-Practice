#include<stdio.h>
int main()
{
	double i;
	double t;
	printf("enter the interst:");
	scanf("%lf",&i);
	if(i<=100000){
		t=i*0.10;
		printf("you get %lf",t);
	}
	else if(i>100000&&i<=200000){
		t=100000*0.10+(i-1000000)*0.075;
		printf("you get %lf",t);
	}
	else if(i>200000&&i<=400000){
		t=100000*0.10+100000*0.075+(i-200000)*0.05;
		printf("you get %lf",t);
	}
	else if(i>400000&&i<=600000){
		t=100000*0.10+100000*0.075+200000*0.05+(i-400000)*0.03;
		printf("you get %lf",t);
	}
	else if(i>600000&&i<=1000000){
		t=100000*0.10+100000*0.075+200000*0.05+200000*0.03+(i-600000)*0.015;
		printf("you get %lf",t);
	}
	else if(i>=1000000){
		t=100000*0.10+100000*0.075+200000*0.05+200000*0.03+400000*0.015+(i-1000000)*0.01;
		printf("you get %lf",t);
	}
	else
	printf("I donn't know");
	return 0;
}