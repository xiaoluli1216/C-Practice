#include<stdio.h>
int main()
{
	int isPrime(int t);
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	if(isPrime(num)){
		printf("yes");
	}
	else{
		printf("no");
	}
	return 0;
}
int isPrime(int t)
{
	if(t<=1){
		return 0;
	}
	int isPrime=1;
	for(int i=2;i*i<=t;i++){
		if(t%i==0){
			isPrime=0;
			break;
		}
	}
	if(isPrime){
		return 1;
	}
	else{
		return 0;
	}
}