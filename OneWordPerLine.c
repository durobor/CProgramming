#include <stdio.h>

#define IN 1
#define OUT 0

int main(){
	int c, state;

	state=IN;
	while((c=getchar())!=EOF){
		if (' '!=c && '\t'!=c && '\n'!=c && OUT==state){
			state = IN;
			putchar('\n');
		}
		else if (' '!=c && '\t'!=c && '\n'!=c){
			state=IN;
		}
		else{
			state=OUT;
		}

		if(IN==state){
			putchar(c);
		}
	}
}
