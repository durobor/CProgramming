#include <stdio.h>

float toFahrenheit(int cels){
	return cels*9./5.+32;
}

int main(){
	int celsius;
	printf("Celsius\tFahrenheit\n");
	for(celsius=300;celsius>=0;celsius-=20){
		printf("%3d\t%6.1f\n", celsius, toFahrenheit(celsius));
	}
}
