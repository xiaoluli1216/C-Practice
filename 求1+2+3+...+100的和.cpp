#include<stdio.h>
int main()
{
	int i;
	int sum=0;
	i=1;
	while(i<100){
		sum=sum+i;
		i++;
	}
	printf("%d",sum);
	return 0;
}