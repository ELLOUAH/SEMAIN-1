#include <stdio.h>
#include <stdlib.h>

int main() {
	float mile,m,km;
	printf(" donner la distance en mile mile=");
	scanf("%f",&mile);
	km=mile/1.609;
	m=km*1000;
	printf("la distance en metre m=%f",m);
	return 0;
}
