#include <stdio.h>
#include <stdlib.h>



int main() { 
int rect,longue,large;
printf(" donner la valeur de longue:");
scanf("%d",&longue);
printf("donner la valeur de large: ");
scanf("%d",&large);
 rect= 2*(longue + large);
 printf(" la circonférence d'un rectangle %d",rect);
	return 0;
}
