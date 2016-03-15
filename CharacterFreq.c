#include <stdio.h>

#define CHARS 26
#define A_TO_A 32

int main(){
	int i, j, c;
	int digits[10];
	int characters[CHARS];

	for(i=0;i<10;++i){
		digits[i]=0;
	}
	for(i=0;i<CHARS;++i){
		characters[i]=0;
	}

	while((c=getchar())!=EOF){
		if('0'<=c && '9'>=c){
			++digits[c-'0'];
		}
		else if('A'<=c && 'Z'>=c){
			c+=A_TO_A;
			++characters[c-'a'];
		}
		else if('a'<=c && 'z'>=c){
			++characters[c-'a'];
		}
	}
	
	for(i=0;i<10;++i){
		printf("%c: ", '0'+i);
		for(j=digits[i];j>0;--j){
			printf("|");
		}
		printf("\n");
	}
	for(i=0;i<CHARS;++i){
		printf("%c: ", 'a'+i);
		for(j=characters[i];j>0;--j){
			printf("|");
		}
		printf("\n");
	}
}
