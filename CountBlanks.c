#include <stdio.h>

int main(){
	int c,b,t,n;

	while((c=getchar())!=EOF){
		if(' '==c) ++b;
		if('\t'==c) ++t;
		if('\n'==c) ++n;
	}
	printf("Blanks: %d",b);
	printf("Tabs: %d",t);
	printf("New lines: %d",n);
}
