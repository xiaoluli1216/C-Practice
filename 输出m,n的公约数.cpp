#include<stdio.h>
int main()
{
	int m,n;
	int t;
	int i;
	printf("enter two numbers:");
	scanf("%d %d",&m,&n);
	if(m>n){
		t=m;
		m=n;
		n=t;
	}
	i=1;
	do{
		if(m%i==0&&n%i==0){
			printf("%d",i);
		}
		i++;
	}
	while(i<=m);
	return 0;
}