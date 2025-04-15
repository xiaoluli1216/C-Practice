#include<stdio.h>
int main()
{
	void change(int num[3][3]);
	int arr[3][3];
	printf("enter the arr[3][3]:\n");
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	change(arr);
	return 0;
}
void change(int num[3][3])
{
	int i,j,temp;
	for(i=0;i<=2;i++){
		for(int j=i+1;j<=2;j++){
			temp=num[i][j];
			num[i][j]=num[j][i];
			num[j][i]=temp;
		}
	}
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("%d ",num[i][j]);
		}
		printf("\n");
	}
}