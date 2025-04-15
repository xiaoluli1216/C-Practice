#include<stdio.h>
int main(){
	int i,j;
	int num[4][5];
	for(i=0;i<=3;i++){
		for(j=0;j<=4;j++){
			scanf("%d",&num[i][j]);
		}
	}
	int find_the_point=0;
	for(i=0;i<=3;i++){
		int max=num[i][0];
		int circle=0;
		for(j=1;j<=4;j++){
			if(num[i][j]>max){
				max=num[i][j];
				circle=j;
			}
		}
		int ispoint=1;
		for(int k=0;k<=3;k++){
			if(num[k][circle]<max){
				ispoint=0;
				break;
			}
		}
		if(ispoint){
			printf("the point is %d,locats at(%d,%d)\n",max,i+1,circle+1);
			find_the_point=1;
		}
	}
	if(find_the_point==0){
		printf("no\n");
	}
	return 0;
}