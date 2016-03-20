#include <stdio.h>

#define MAXLINE 1000

int getLine(char line[]);

int main(){
	int len;
	char printLine[MAXLINE];

	while((len=getLine(printLine))>0){
		if(80<len){
			printf("%s", printLine);
		}
	}
}

int getLine(char line[]){
	int i, c;
	for(i=0;i<MAXLINE-1 && EOF!=(c=getchar()) && '\n'!=c;++i)
		line[i]=c;
	if('\n'==c){
		line[i]=c;
		++i;
	}
	line[i]='\0';
	return i;
}
