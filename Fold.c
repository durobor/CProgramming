#include <stdio.h>

#define LINELENGTH 50
#define MAXINPUT 2000

int getInput(char storingDest[]);
void parseOutput(char rawInput[]);

int main(){
	char input[MAXINPUT];

	while(0<getInput(input)){
		parseOutput(input);
	}

	return 0;
}

int getInput(char storingDest[]){
	int i, c;
	for(i=0;(MAXINPUT-1)>i && EOF!=(c=getchar()) && '\n'!=c;++i)
		storingDest[i]=c;
	if('\n'==c){
		storingDest[i]=c;
		++i;
	}
	storingDest[i]='\0';
	return i;
}

void parseOutput(char rawInput[]){
	char line[LINELENGTH];
	int j;
	for(j=0;(MAXINPUT-LINELENGTH-1)>j && rawInput[j]!='\n' && rawInput[j]!='\0' && rawInput[j]!=EOF;++j){
		int i;
		for(i=0;(LINELENGTH-1)>i && rawInput[i+j]!='\n' && rawInput[i+j]!=EOF;++i){
			line[i]=rawInput[i+j];
		}
		while(0<i && '\n'!=rawInput[i+j] && ' '!=rawInput[i+j]){
			--i;
		}
		if(0==i){
			j+=LINELENGTH-3;
			line[LINELENGTH-2]='-';
			line[LINELENGTH-1]='\0';
		}
		else{
			line[i]='\0';
			j+=i;
		}
		printf("%s\n", line);
	}
}
