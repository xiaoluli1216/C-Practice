#include<stdio.h>
int main(){
	char str[3][80];
	int i,j;
	int spaces=0;
	int others=0;
	int numbers=0;
	int small=0;
	int big=0;
	for(i=0;i<=2;i++){
		fgets(str[i],80,stdin);
	}
	for(i=0;i<=2;i++){
		for(j=0;str[i][j]!='\0';j++){
			if(str[i][j]==' '){
				spaces++;
			}
			else if(str[i][j]>='a'&&str[i][j]<='z'){
				small++;
			}
			else if(str[i][j]>='A'&&str[i][j]<='Z'){
				big++;
			}
			else if(str[i][j]>='0'&&str[i]<='9'){
				numbers++;
			}
			else{
				others++;
			}
			
		}
	}
	printf("%d %d %d %d %d",spaces,big,small,numbers,others);
	return 0;
}