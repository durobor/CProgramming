#include <stdio.h>

int main(){
	float cels, fahr;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;

	printf("Celsius\tFahrenheit\n");
	cels = lower;
	while(cels<=upper){
		fahr = cels*9./5.+32.;
		printf("%3.0f\t%6.1f\n", cels, fahr);
		cels = cels + step;
	}
}
