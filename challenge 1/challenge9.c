#include <stdio.h>
#include <stdlib.h>
#include<math.h>



int main() {
	double x1,x2,y1,y2,m;
	printf("donner la valeur de x1:");
	scanf("%fl",&x1);
	printf("donner la valeur de x2:");
	scanf("%fl",&x2);
	printf("donner la valeur de y1:");
	scanf("%fl",&y1);
	printf("donner la valeur de y2:");
	scanf("%fl",&y2);
	 m=sqrt (pow(x2-x1,2) + pow(y2-y1,2));
	 printf("la distance entre deux points donnés est:%.2fl",m);
	 	return 0;
}
