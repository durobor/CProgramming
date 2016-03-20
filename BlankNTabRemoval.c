#include <stdio.h>

#define MAXLINE 1000

int getLine(char line[]);

int main(){
	char line[MAXLINE]="";

	while(0<getLine(line)){
		if('\n'!=line[0]){
			printf("%s", line);
		}
	}
}

int getLine(char line[]){
	int i, c;
	for(i=0;i<MAXLINE-1 && EOF!=(c=getchar()) && '\n'!=c;++i){
		line[i]=c;
	}
	if(0!=i){
		for(;' '==line[i] || '\t'==line[i];--i);
		line[++i]='\n';
		line[++i]='\0';
	}
	return i;
}
