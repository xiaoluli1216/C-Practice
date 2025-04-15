#include<stdio.h>
#include<string.h>
#define NUM_STRINGS 10
#define MAX_LEN 100
int main()
{
	void sortStr(char str[][MAX_LEN],int n);
	char string[NUM_STRINGS][MAX_LEN];
	int i;
	printf("enter ten sentences:\n");
	for(i=0;i<NUM_STRINGS;i++){
		fgets(string[i],MAX_LEN,stdin);
	    size_t len=strlen(string[i]);
	    if(len>0&&string[i][len-1]=='\n'){
		string[i][len-1]='\0';
	    }
	}
	sortStr(string,NUM_STRINGS);
	printf("\nthe result is:\n");
	for(i=0;i<MAX_LEN;i++){
		printf("%s\n",string[i]);
	}
	return 0;
}
void sortStr(char str[][MAX_LEN],int n)
{
	char temp[MAX_LEN];
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(strcmp(str[j],str[j+1])>0){
				strcpy(temp,str[j]);
				strcpy(str[j],str[j+1]);
				strcpy(str[j+1],temp);
			}
		}
	}
}