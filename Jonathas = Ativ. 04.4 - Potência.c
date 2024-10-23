#include <stdio.h>

int main ( ) {
	int num;
	printf ("Digite uma sequência terminada por zero: ");
	scanf("%d", &num);
	while (num != 0){
		printf("%d", num+num);
		scanf("%d", &num);
	}
	return 0;
}
