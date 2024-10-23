#include <stdio.h>

double pot(double n1, unsigned int n2) {
    if (n2 == 0) {
        return 1;
    }
    else {
        return n1 * pot(n1, n2 - 1);
    }
}

int main() {
    double a;
    unsigned int b;
	printf("\nDigite a e b: \n");
    scanf("%lf %u", &a, &b);
    printf("\n%.2lf elevado a %u: %.2lf", a, b, pot(a, b));
    return 0;
}
