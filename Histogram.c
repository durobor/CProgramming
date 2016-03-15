#include <stdio.h>

#define OUT 0
#define IN 1

int main(){
	int cCount, i, c, state;
	int wlengths[50];

	for(i=0;i<50;++i){
		wlengths[i]=0;
	}

	state=OUT;
	while((c=getchar())!=EOF){
		if(' '!=c && '\n'!=c && '\t'!=c && !state){
			state=IN;
			cCount=0;
			++cCount;
		}
		else if(' '!=c && '\n'!=c && '\t'!=c){
			++cCount;
		}
		else{
			state=OUT;
		}

		if(!state)
			++wlengths[cCount];
	}

	for(i=1;i<50;++i){
		printf("\nNumber of words with length %2d:	", i);
		int j;
		for(j=wlengths[i];j>0;--j){
			printf("|");
		}
	}
}
