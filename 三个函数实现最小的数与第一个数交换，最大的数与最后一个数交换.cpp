#include<stdio.h>
int main()
{
	void input(int num[10]);
	int change(int num[10]);
	void output(int num[10]);
	int arr[10];
	printf("enter 10 numbers:\n");
	input(arr);
	change(arr);
	output(arr);
	return 0;
}
void input(int num[10])
{
	for(int i=0;i<10;i++){
		scanf("%d",&num[i]);
	}
}
void change(int num[10])
{
	int *p1,*p2;
	p1=&num[0];
	p2=&num[9];
	int max=num[0];
	int min=num[9];
	for(int i=1;i<10;i++){
		if(num[i]>max){
			max=num[i];
			p1=&num[i];
		}
	}
	for(int i=8;i>=0;i--){
		if(num[i]<min){
			min=num[i];
			p2=&num[i];
		}
	}
	int temp1=*p1;
	*p1=num[0];
	num[0]=temp1;
	int temp2=*p2;
	*p2=num[9];
	num[9]=temp2;
}
void output(int num[10])
{
	for(int i=0;i<10;i++){
		printf("%d ",num[i]);
	}
}