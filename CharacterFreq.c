#include <stdio.h>

#define CHARS 52

int main(){
	int i, c;
	int digits[10];
	int characters[CHARS];

	for(i=0;i<10;++i){
		digits[i]=0;
	}
	for(i=0;i<CHARS;++i){
		characters[i]=0;
	}

	printf("%d", 'a'-'A');

	while((c=getchar()!=EOF)){
		if('0'<=c && '9'>=c){
			++digits[c-'0'];
		}
		else if('a'<=c && '9'>=c){
		}
	}
}
