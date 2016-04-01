#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <math.h>

int main(){
	char c=-1;
	short s=-1;
	int i=-1;
	long l=-1;
	unsigned char uc=0;
	unsigned short us=0;
	unsigned int ui=0;
	unsigned long ul=0;
	printf("Lower limits according to library:\n");
	printf("CHAR_MIN: %d\n", CHAR_MIN);
	printf("SHRT_MIN: %d\n", SHRT_MIN);
	printf("INT_MIN: %d\n", INT_MIN);
	printf("LONG_MIN: %ld\n", LONG_MIN);

	printf("\nLower limits computed:\n");
	while(0>c){
		--c;
		if(0<c){
			printf("CHAR_MIN: %d\n", ++c);
			--c;
		}
	}
	while(0>s){
		s*=2;
		if(0<--s){
			printf("SHRT_MIN: %d\n", ++s);
			--s;
			--s;
		}
		++s;
	}
	while(0>i){
		i*=2;
		if(0<--i){
			printf("INT_MIN: %d\n", ++i);
			--i;
			--i;
		}
		++i;
	}
	while(0>l){
		l*=2;
		if(0<--l){
			printf("LONG_MIN: %ld\n", ++l);
			--l;
			--l;
		}
		++l;
	}

	printf("\nUpper limits according to library:\n");
	printf("CHAR_MAX: %d\n", CHAR_MAX);
	printf("SHRT_MAX: %d\n", SHRT_MAX);
	printf("INT_MAX: %d\n", INT_MAX);
	printf("LONG_MAX: %ld\n", LONG_MAX);
	printf("UCHAR_MAX: %d\n", UCHAR_MAX);
	printf("USHRT_MAX: %d\n", USHRT_MAX);
	printf("UINT_MAX: %u\n", UINT_MAX);
	printf("ULONG_MAX: %lu\n", ULONG_MAX);

	printf("\nUpperlimits computed:\n");
	printf("CHAR_MIN: %d\n", c);
	printf("SHRT_MIN: %d\n", s);
	printf("INT_MIN: %d\n", i);
	printf("LONG_MIN: %ld\n", l);
	printf("UCHAR_MAX: %d\n", --uc);
	printf("USHRT_MAX: %d\n", --us);
	printf("UINT_MAX: %u\n", --ui);
	printf("ULONG_MAX: %lu\n", --ul);

	return 0;
}
