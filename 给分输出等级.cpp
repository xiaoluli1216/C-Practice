#include<stdio.h>
int main()
{
	int score;
	int t;
	int grade;
	printf("enter the score:");	
	scanf("%d",&score);
	t=score/10;
	switch(t)
	{
		case 10:
		case 9:
			grade='A';break;
		case 8:grade='B';break;
		case 7:grade='C';break;
		case 6:grade='D';break;
		default:grade='E';
	}
	printf("grade is %c",grade);
	return 0;
}