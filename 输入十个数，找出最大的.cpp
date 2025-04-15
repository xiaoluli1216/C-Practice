#include<stdio.h>
int main()
{
	int num,max,i;
	printf("enter 10 numbers:");
	scanf("%d",&num);
	max=num;
	for(i=1;i<10;i++){
		scanf("%d",&num);
		if(num>max){
			max=num;
		}
		
	}
	printf("%d",max);
	return 0;
}