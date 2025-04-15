#include<stdio.h>
int main()
{
	int length(char str[]);
	char string[100];
	printf("enter a sentence:");
	fgets(string,sizeof(string),stdin);
	int len=length(string);
	printf("%d",len);
	return 0;
}
int length(char str[])
{
	int count=0;
	for(int i=0;str[i]!='\0';i++){
		count++;
	}
	if(count>0&&str[count-1]=='\n'){
		count--;
	}
	return(count);
}