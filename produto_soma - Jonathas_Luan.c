#include <stdio.h>

int produto(int a, int b) {
    if (b == 0) {
        return 0;
    }
    else if (b == 1) {
        return a;
    }
    else {
        return a + produto(a, b - 1);
    }
}

int main() {
    int a, b;
    printf("Digite dois nemeros naturais: \n");
    scanf("%d %d", &a, &b);
    printf("%d multiplicado por %d e: %d\n", a, b, produto(a, b));
    return 0;
}

