#include <stdio.h>

int getLine(char line[]);
void reverse(char string[]);

int main(){
	char input[MAXLINE];

	while(0<getLine(input)){
		printf("%s", reverse(input));
	}
}

int getLine(char input[]){
	int i, c;
	for(i=0;i<MAXLINE-1 && EOF!=(c=getchar()) && '\n'!=c;++i){
		input[i]=c;
	}
	if('\n'==c){
		input[i]='\n';
		++i;
	}	
	input[i]='\0';
	return i;
}

void reverse(char string[]){
	char c;
	int i, j;
	for(i=0;'\0'!=string[i] && i<MAXLINE;++i);
	string[i]='\0';
	--i;
	for(j=0;j<i;++j){
		c=string[i];
		string[i]=string[j];
		string[j]=c;
	}
}
