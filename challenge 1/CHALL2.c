#include <stdio.h>
#include <stdlib.h>


int main() {
	float C,F;
	printf("Donner Moi la temp en Fahrenheit: ");
	scanf("%f",&F);
	C = (F-32)/1.8;
	printf("votre temp en C est %f°C",C);
	
	return 0;
}
