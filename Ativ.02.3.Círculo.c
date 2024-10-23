/*Calcula area e perimetro do raio de um circulo*/

#include <stdio.h>
#define PI 3.1415

int main ( ) {
	float raio, area, perim;
	printf ("Calculo de area e perimetro \n");
	printf ("Digite o raio de um circulo: ");
	scanf ("%f", &raio);
	
	perim = 2 * PI * raio;
	area = PI * (raio * raio);
	
	printf ("Area: %f \nPerimetro: %f", area, perim);
	return 0;
}

