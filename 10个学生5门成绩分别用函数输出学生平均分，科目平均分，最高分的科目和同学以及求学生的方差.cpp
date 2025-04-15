#include<stdio.h>
int main()
{
	void studentaverage(float arr[10][5],float stuaverage[10]);
	void courseaverage(float arr[10][5]);
	void findmax(float arr[10][5]);
	void fangcha(float stusverage[10]);
	float num[10][5];
	float stuaverage[10];
	printf("enter 10 students and their five scores:\n");
	for(int i=0;i<=9;i++){
		for(int j=0;j<=4;j++){
			scanf("%f",&num[i][j]);
		}
	}
	printf("each student's average score:\n");
	studentaverage(num,stuaverage);
	printf("each course's average score:\n");
	courseaverage(num);
	findmax(num);
	fangcha(stuaverage);
	return 0;
}
void studentaverage(float arr[10][5],float stuaverage[10])
{
	int i,j;
	for(i=0;i<10;i++){
		float sum1=0;
		for(j=0;j<5;j++){
			sum1=sum1+arr[i][j];
		}
		stuaverage[i]=sum1/5;
		printf("student%d:%.2f\n",i+1,stuaverage[i]);
	}
}
void courseaverage(float arr[10][5])
{   
    int i,j;
	for(j=0;j<5;j++){
		float sum2=0;
		for(i=0;i<10;i++){
			sum2=sum2+arr[i][j];
		}
		float avg=sum2/10;
		printf("course %d:%.2f\n",i+1,avg);
	}
}
void findmax(float arr[10][5])
{
	float max=arr[0][0];
	int m=1;
	int n=1;
	for(int i=0;i<=9;i++){
		for(int j=0;j<=4;j++){
			if(arr[i][j]>max){
				max=arr[i][j];
				m=i+1;
				n=j+1;
			}
		}
	}
	printf("%.2f is highest score from student%d in course%d\n",max,m,n);
}
float fangcha(float stuaverage[10])
{
	float sum3=0,sum3_sq=0;
	int n=10;
	int i;
	for(i=0;i<=9;i++){
		sum3=sum3+stuaverage[i];
		sum3_sq=sum3_sq+stuaverage[i]*stuaverage[i];
	}
	float fangcha=(sum3_sq/n)-((sum3/n)*(sum3/n));
	printf("student%d fangcha:%.2f\n",i+1,fangcha);
}
