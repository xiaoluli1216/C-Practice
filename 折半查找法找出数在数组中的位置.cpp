#include<stdio.h>
int main(){
	int num[]={1,3,4,5,13,17,18,23,26,34,38,47,48,57,88};
	int i=sizeof(num)/sizeof(num[0]);
	int a;
	printf("enter a number:");
	scanf("%d",&a);
	int left=0;
	int right=i-1;
	int found=0;
	int locate=-1;
	while(left<=right){
		int mid=left+(right-left)/2;
		if(num[mid]==a){
			found=1;
			locate=mid;
			break;
		}
		else if(num[mid]<a){
			left=mid+1;
		}
		else{
			right=mid-1;
		}
	}
	if(found){
		printf("%d",locate);
	}
	else{
		printf("no");
	}
	return 0;	
}