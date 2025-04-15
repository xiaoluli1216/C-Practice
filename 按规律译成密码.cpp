#include<stdio.h>
#include<string.h>
int main(){
	int i;
	char str[1000];
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")]='\0';
	for(i=0;i<strlen(str);i++){
		if(str[i]>='a'&&str[i]<='z'){
			str[i]='z'-(str[i]-'a');
		}
		else if(str[i]>='A'&&str[i]<='Z'){
			str[i]='Z'-(str[i]-'A');
		}
	}
	printf("%s",str);
	return 0;
}