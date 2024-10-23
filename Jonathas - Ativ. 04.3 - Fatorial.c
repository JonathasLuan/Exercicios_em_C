#include <stdio.h>
#include <math.h>

int main ( ) {
	int n, i, fat = 1;
	printf("\nDigite n: ");
	scanf("%d", &n);
	
	for (i = n; i > 0; i--) {
		fat = fat * i;
	}
	printf("Fatorial de %d: %d.", n, fat);
	return 0;
}
