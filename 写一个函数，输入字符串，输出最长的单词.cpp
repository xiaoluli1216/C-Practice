#include<stdio.h>
#include<string.h>
int main()
{
	void findlongest(char str[]);
	char input[1000];
	printf("enter a sentence:");
	fgets(input,sizeof(input),stdin);
	findlongest(input);
	return 0;
}
void findlongest(char str[])
{
	char longest[100]="";
	char current[100]="";
	int m=0;
	int n=0;
	int i=0;
	while(str[i]!='\0'){
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
			current[n]=str[i];
			n++;
		}
		else{
			if(n>m){
				current[n]='\0';
				strcpy(longest,current);
				m=n;
			}
			n=0;
		}
		i++;
	}
	if(n>m){
		current[n]='\0';
		strcpy(longest,current);
	}
	printf("longestword is %s.",longest);
}