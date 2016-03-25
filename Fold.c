#include <stdio.h>

#define LINELENGTH 100
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
}
