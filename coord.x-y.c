#include <stdio.h>

int main () {
	int x, y;
	printf ("\nDigite x: ");
	scanf("%d", &x);
	printf ("\nDigite y: ");
	scanf("%d", &y);
	
	if (x == 0 && y == 0) {
		printf("Origem");
	}
	else
	if (x > 0 && y == 0) {
		printf ("Eixo X");
	}
	else if (y > 0 && x == 0) {
		printf ("Eixo Y");
	}
	return 0;
}
