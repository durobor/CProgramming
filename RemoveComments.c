#include <stdio.h>

#define OFF 0
#define ON 1
#define LINE 2

int main(){

	FILE *source = fopen("Comments.c", "r");
	FILE *dest = fopen("NoComments.c", "w");

	int commentState=OFF, stringState=OFF, c;
	char lastC;

	c=fgetc(source);
	lastC=(char)c;
	while(EOF!=c){
		if(ON==stringState && OFF==commentState){
			if('"'==(char)c) stringState=OFF;
		}
		else if(OFF==commentState){
			if('"'==(char)c) stringState=ON;
		}

		if(OFF==stringState && ON==commentState){
			if('*'==lastC && '/'==(char)c){
				commentState=OFF;
				lastC=' ';
				c=' ';
			}
		}
		else if(OFF==stringState && LINE==commentState){
			if('\n'==(char)c){
				commentState=OFF;
				lastC=' ';
				c=' ';
			}
		}
		else if(OFF==stringState){
			if('/'==lastC && '*'==(char)c){
				commentState=ON;
			}
			else if('/'==lastC && '/'==(char)c){
				commentState=LINE;
			}
		}

		if(OFF==commentState){
			fputc((char)lastC, dest);
		}
		lastC=(char)c;
		c=fgetc(source);
	}
	fputc((char)lastC, dest);

	fclose(source);
	fclose(dest);
	return 0;
}
