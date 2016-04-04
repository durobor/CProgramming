#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int htoi(char *hex);

int main(){
	char h[] = "0X1abf5";
	printf("String: %s\n", h);
	printf("Integer: %d\n", htoi(h));

	return 0;
}

int htoi(char *hex){
	int i, c, n, r=0;
	for(i=0;i<sizeof(hex) && '\0'!=hex[i];++i){
		hex[i]=(char)tolower(hex[i]);
	}
	for(i=0;i<sizeof(hex) && '\0'!=hex[i];++i){
		if((0==i && '0'==hex[i]) || (1==i && 'x'==hex[i])){
			i=1;
		}
		else{
			switch (hex[i]){
				case '0': n=0;
									break;
				case '1': n=1;
									break;
				case '2': n=2;
									break;
				case '3': n=3;
									break;
				case '4': n=4;
									break;
				case '5': n=5;
									break;
				case '6': n=6;
									break;
				case '7': n=7;
									break;
				case '8': n=8;
									break;
				case '9': n=9;
									break;
				case 'a': n=10;
									break;
				case 'b': n=11;
									break;
				case 'c': n=12;
									break;
				case 'd': n=13;
									break;
				case 'e': n=14;
									break;
				case 'f': n=15;
									break;
				default: printf("Dumbass!...\n");
								 break;
			}
			r=r*16+n;
		}
	}
	return r;
}
