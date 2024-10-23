#include <stdio.h>

int fat (int n) {
	int nfat = 1;
	int i;
	
	for (i = n; i > 1; i--) {
		nfat *= i;
	}
	return nfat;
}

int main () {
	int n;
	printf ("\n Digite um numero: ");
	scanf ("%d", &n);
	printf ("Fatorial de %d: %d\n", n, fat(n));
	return 0;
}
