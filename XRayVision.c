#include <stdio.h>

int main(){
	int c;

	while((c=getchar())!=EOF){
		if('\t'==c) printf("\\t");
		else if('\b'==c) printf("\\b");
		else if('\\'==c) printf("\\");
		else{
			putchar(c);
		}
	}
}
