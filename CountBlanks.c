#include <stdio.h>

int main(){
	int c;
	int b=0;
	int t=0;
	int n=0;

	while((c=getchar())!=EOF){
		if(' '==c) ++b;
		if('\t'==c) ++t;
		if('\n'==c) ++n;
	}
	printf("Blanks: %d\n",b);
	printf("Tabs: %d\n",t);
	printf("New lines: %d\n",n);
}
