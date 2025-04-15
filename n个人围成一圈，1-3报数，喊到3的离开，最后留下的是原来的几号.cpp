#include<stdio.h>
#include<stdlib.h>
int josephus(int n,int k){
	int* circle=(int*)malloc(n * sizeof(int));
	for(int i=0;i<n;i++){
		circle[i]=i+1;
	}
	int count=0;
	int remaining=n;
	int index=0;
	while(remaining>1){
		if(circle[index]!=0){
			count++;
			if(count==k){
				circle[index]=0;
				count=0;
				remaining--;
			}
		}
		index=(index+1)%n;
	}
	int lastPerson=0;
	for(int i=0;i<n;i++){
		if(circle[i]!=0){
			lastPerson=circle[i];
			break;
		}
	}
	free(circle);
	return lastPerson;
}
int main(){
	int n;
	printf("enter n:");
	scanf("%d",&n);
	int k=3;
	int lastPerson=josephus(n,k);
	printf("lastperson is %d",lastPerson);
	return 0;
}