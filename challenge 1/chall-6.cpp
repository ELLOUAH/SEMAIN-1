#include <stdio.h>



int main() {
int a,b,s,ss,m,d,R;
printf("donner la valeur de a :");
scanf("%d",&a);
printf("donner la valeur de b :");
scanf("%d",&b);
s=a+b;	
ss=a-b;
m=a*b;
d=a/b;
R=a%b;
printf("la somme de a+b est s %d",s);
printf("la soustraction de a-b est ss %d",ss);
printf("la multiplucation de a*b est m %d",m);
printf("la division de a/b est d %d",d);
printf("la rest de division a%b est R %d",R);
return 0;
}
