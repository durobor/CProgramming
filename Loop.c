#include <stdio.h>

int main(){
	int i, c, lim=100;
	char s[lim];
	/*
	for(i=0;i<lim-1 && (c=getchar())!='\n' && c!=EOF;++i){
		s[i]=c;
	}
	printf("%s", s);
	*/

	// Equivalent form of the above loop withouth && or ||:
	enum boolean {FALSE=0, TRUE};
	int karateSchnitzel = FALSE;
	i=0;
	if(i<lim-1){
		if((c=getchar())!='\n'){
			if(c!=EOF){
				karateSchnitzel = TRUE;
			}
			else{
				karateSchnitzel = FALSE;
			}
		}
		else{
			karateSchnitzel = FALSE;
		}
	}
	else{
		karateSchnitzel = FALSE;
	}
	while(karateSchnitzel){
		s[i]=c;
		++i;
		if(i<lim-1){
			if((c=getchar())!='\n'){
				if(c!=EOF){
					karateSchnitzel = TRUE;
				}
				else{
					karateSchnitzel = FALSE;
				}
			}
			else{
				karateSchnitzel = FALSE;
			}
		}
		else{
			karateSchnitzel = FALSE;
		}
	}
	s[i]='\0';
	printf("%s\n", s);
}
