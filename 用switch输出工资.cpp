#include<stdio.h>
int main()
{
	double i;
	int t;
	printf("enter the interst:");
	scanf("%lf",&i);
	t=i/100000;
	switch(t)
	{
		case 1:printf("%lf",i*0.10);break;
		case 2:printf("%lf",100000*0.10+(i-100000)*0.075);break;
		case 3:
		case 4:printf("%lf",100000*0.10+100000*0.075+(i-200000)*0.05);break;
		case 5:
		case 6:printf("%lf",100000*0.10+100000*0.075+200000*0.05+(i-400000)*0.03);break;
		case 7:
		case 8:
		case 9:
		case 10:printf("%lf",100000*0.10+100000*0.075+200000*0.05+400000*0.03+(i-600000)*0.015);break;
		default:printf("%lf",100000*0.10+100000*0.075+200000*0.05+400000*0.03+400000*0.015+(i-1000000)*0.01);break;
	}
	return 0;
}