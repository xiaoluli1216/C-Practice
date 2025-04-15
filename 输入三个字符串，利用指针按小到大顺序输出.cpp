#include<stdio.h>
#include<string.h>
int main(){
	char str[3][100];
	printf("enter three sentences:\n");
	for(int i=0;i<3;i++){
		fgets(str[i],sizeof(str[i]),stdin);
	}
	char *p1,*p2,*p3;
	p1=str[0];
	p2=str[1];
	p3=str[2];
	if(strcmp(p1,p2)>0){
		char *temp=p1;
		p1=p2;
		p2=temp;
	}
	if(strcmp(p1,p3)>0){
		char *temp=p1;
		p1=p3;
		p3=temp;
	}
	if(strcmp(p2,p3)>0){
		char *temp=p2;
		p2=p3;
		p3=temp;
	}
	printf("%s %s %s",p1,p2,p3);
	return 0;
}