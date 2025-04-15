#include<stdio.h>
int main(){
	int *p1,*p2,*p3;
	int a,b,c;
	p1=&a;
	p2=&b;
	p3=&c;
	printf("enter three numbers:");
	scanf("%d %d %d",&a,&b,&c);
	if(*p1>*p2){
		int temp=*p1;
		*p1=*p2;
		*p2=temp;
	}
	if(*p1>*p3){
		int temp=*p1;
		*p1=*p3;
		*p3=temp;
	}
	if(*p2>*p3){
		int temp=*p2;
		*p2=*p3;
		*p3=temp;
	}
	printf("%d %d %d",*p1,*p2,*p3);
	return 0;
}