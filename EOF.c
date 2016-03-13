#include <stdio.h>

int main(){
	int c;

	printf("int value: %d\n", EOF);
	printf("hex value: %x\n", EOF);
	printf("EOF+1: %d\n", EOF+1);

	while((c=getchar())!=EOF){
		putchar(c);
	}
}
