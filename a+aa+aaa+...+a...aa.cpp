#include<stdio.h>
int main(){
	int a=5;
	int sum=a;
	int i,n;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=0;i<n-1;i++){
		a=a*10+a;
		sum=sum+a;
		i++;
	}
	printf("%d",sum);
	return 0;
}