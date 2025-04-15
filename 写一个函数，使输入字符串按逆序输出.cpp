#include<stdio.h>
#include<string.h>
int main()
{
	int change(char str[]);
	char input[100];
	printf("enter the sentence:");
	fgets(input,sizeof(input),stdin);
	input[strcspn(input,"\n")]='\0';
	change(input);
	printf("%s",input);
	return 0;	
}
int change(char str[])
{
	int len=strlen(str);
	int i,m,n;
	if(len%2==0){
		n=len/2-1;
		for(i=0;i<=n;i++){
			int temp1=str[i];
			str[i]=str[len-1-i];
			str[len-1-i]=temp1;
		}
	}
	else{
		m=(len+1)/2;
		for(i=0;i<m;i++){
			int temp2=str[i];
			str[i]=str[len-1-i];
			str[len-1-i]=temp2;
		}
	}
	return 1;
	
}