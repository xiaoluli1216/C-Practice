#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100
int main(){
	int n,m;
	printf("enter the numbers:");
	if(scanf("%d %d",&n,&m)!=2){
		printf("no");
		return 1;
	}
	if(n<=0||n>MAX_SIZE){
		printf("no");
		return 1;
	}
	if(m>=n||m<=0){
		printf("no");
		return 1;
	}
	int num[MAX_SIZE];
	int *temp=(int *)malloc(m * sizeof(int));
	if(temp==NULL){
		printf("no");
		return 1;
	}
	printf("enter the num[]:");
	for(int i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	int *p=num+(n-m);
	for(int i=0;i<m;i++){
		temp[i]=*(p+i);
	}
	p=num+(n-1);
	for(int i=n-1;i>=m;i--){
		*p=*(p-m);
		p--;
	}
	p=num;
	for(int i=0;i<m;i++){
		*p=temp[i];
		p++;
	}
	printf("after shift:");
	for(int i=0;i<n;i++){
		printf("%d ",num[i]);
	}
	printf("\n");
	free(temp);
	return 0;
}