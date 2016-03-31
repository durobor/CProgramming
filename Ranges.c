#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
	char c;
	short s;
	int i;
	long l;
	printf("Lower limits according to library:\n");
	printf("CHAR_MIN: %d\n", CHAR_MIN);
	printf("SHRT_MIN: %d\n", SHRT_MIN);
	printf("INT_MIN: %d\n", INT_MIN);
	printf("LONG_MIN: %ld\n", LONG_MIN);

	printf("\nUpper limits according to library:\n");
	printf("CHAR_MAX: %d\n", CHAR_MAX);
	printf("SHRT_MAX: %d\n", SHRT_MAX);
	printf("INT_MAX: %d\n", INT_MAX);
	printf("LONG_MAX: %ld\n", LONG_MAX);
	printf("UCHAR_MAX: %d\n", UCHAR_MAX);
	printf("USHRT_MAX: %d\n", USHRT_MAX);
	printf("UINT_MAX: %u\n", UINT_MAX);
	printf("ULONG_MAX: %lu\n", ULONG_MAX);
	
	return 0;
}
