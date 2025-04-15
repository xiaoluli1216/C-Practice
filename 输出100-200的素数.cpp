#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	int i;
	int isPrime;
	for(a=100;a<200;a++){
		isPrime=1;
		for(i=2;i<=sqrt(a);i++){
			if(a%i==0){
				isPrime=0;
				break;
			}
		}
		if(isPrime){
			printf("%d",a);
		}
	}
	return 0;
}