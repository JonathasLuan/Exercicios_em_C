#include <stdio.h>
#define fahr(cel) ((cel*9/5)+32)

int main () {
	int cel;
	printf("Digite uma temperatura em Celsius: ");
	scanf ("%d", &cel);
	printf("\nTemperatura em Fahrenheit de %d: %d", cel, fahr(cel));
	return 0;
}
