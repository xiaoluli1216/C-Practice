#include<stdio.h>
int main(){
	int a,j,i;
	int num[11]={1,2,13,14,24,34,45,55,56,67};
	int n=10;
	printf("enter a number:");
	scanf("%d",&a);
	j=0;
	while(j<n&&num[j]<a){
		j++;
	}
	for(i=n;i>j;i--){
		num[i]=num[i-1];
	}
	num[j]=a;
	n++;
	for(i=0;i<=10;i++){
		printf("%d ",num[i]);
	}
	return 0;
}