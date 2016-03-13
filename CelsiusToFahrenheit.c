#include <stdio.h>

int main(){
	int celsius;
	printf("Celsius\tFahrenheit\n");
	for(celsius=300;celsius>=0;celsius-=20){
		printf("%3d\t%6.1f\n", celsius, celsius*9./5.+32.);

	}
}
