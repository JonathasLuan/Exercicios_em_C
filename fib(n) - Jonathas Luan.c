#include <stdio.h>

int fib(int x) {
	if (x == 0) {
		return 0;
		}
	if (x == 1) {
		return 1;
		}
	else {
		return fib(x-1) + fib(x-2);
	}
}

int main () {
	int n = 0;
	printf ("Digite uma posicao: ");
	scanf ("%d", &n);
	printf ("O elemento da posicao %d e: %d", n, fib(n));
	return 0;
}
