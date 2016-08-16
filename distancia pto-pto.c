#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int x1, x2, y1, y2, a, b, c, d;
	
	printf("\t\t\t***DISTANCIA PUNTO***");
	
	printf("\nIngrese el valor de X1: \t");
	scanf("%d",&x1);
	
	printf("\nIngrese el valor de X2: \t");
	scanf("%d",&x2);
	
	printf("\nIngrese el valor de Y1: \t");
	scanf("%d",&y1);
	
	printf("\nIngrese el valor de Y2: \t");
	scanf("%d",&y2);
	
	a = pow(x2-x1, 2);
	b = pow(y2-y1, 2);
	
	c=a+b;
	d=sqrt(c);
	
	printf("\nLa Distancia del Punto a Otro es: %d\t", d);	
	
	return 0;
}
