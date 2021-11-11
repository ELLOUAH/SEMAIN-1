#include <stdio.h>
#include <stdlib.h>



int main() {
	int a,b,c,d,moy,somme;
	printf("donner la valeur de a :");
	scanf("%d",&a);
	printf("donner la valeur de b:");
	scanf("%d",&b);
	printf("donner la valeur de c:");
	scanf("%d",&c);
	printf("donner la valeur de d:");
	scanf("%d",&d);
	somme = (a+b+c+d);
	moy = somme / 4;
	printf("la somme de quatre nombre est:%d\n",somme);
	printf("la moyenne de c'est nombre est:%d",moy);
		return 0;
}
