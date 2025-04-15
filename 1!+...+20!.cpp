#include<stdio.h>
int main(){
	long long n=1;
	long long sum=0;
	int i;
	for(i=1;i<=20;i++){
		n=i*n;
		sum=sum+n;
	}
	printf("%lld\n",sum);
	return 0;
}