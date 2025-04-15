#include<stdio.h>
#include<string.h>
int main()
{
	char str[1000];
	int letters=0,spaces=0,digits=0,others=0;
	printf("enter one sentense:");
	fgets(str,sizeof(str),stdin);
	size_t len=strlen(str);
	if(len>0&&str[len-1]=='\n'){
		str[len-1]='\0';
	}
	for(int i=0;str[i]!='\0';i++){
		if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')){
			letters++;
		}
		else if(str[i]>='0'&&str[i]<='9'){
			digits++;
		}
		else if(str[i]==' '){
			spaces++;
		}
		else{
			others++;
		}
	}
	printf("letters are %d",letters);
	printf("spaces are %d",spaces);
	printf("digits are %d",digits);
	printf("others are %d",others);
	return 0;
}