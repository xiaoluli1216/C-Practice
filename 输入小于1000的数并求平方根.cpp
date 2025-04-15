#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	int t;
	printf("enter the number:");
	scanf("%d",&i);
	while(i<=0||i>=1000)
		{
			printf("enter the number again:");
			scanf("%d",&i);
		}
		t=sqrt(i);
		printf("%d",t);
	return 0;
} 