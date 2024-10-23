/*Verifica se é par ou impar*/

#include <stdio.h>
#include <math.h>

int main () {
	int n;
	printf ("Digite um numero: ");
	scanf ("%d", &n);
	printf ("O numero eh: %s\n", (n % 2) == 0 ? "par" : "impar");
	return 0;
}
