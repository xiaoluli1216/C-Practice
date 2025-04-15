#include<stdio.h>
int main(){
	int num[3][3];
	int i,j;
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			scanf("%d",&num[i][j]);
		}
	}
	int sum1=0;
	int sum2=0;
	for(i=0;i<=2;i++){
			sum1=sum1+num[i][i];
	}
	for(i=0;i<=2;i++){	
			sum2=sum2+num[i][2-i];
	}
	printf("%d\n",sum1);
	printf("%d\n",sum2);
	return 0;
}