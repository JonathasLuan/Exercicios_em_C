/*
Retorna dia de rodizio com if

0 e 1 segunda
2 e 3 terca
4 e 5 quarta
6 e 7 quinta
8 e 9 sexta
*/

#include <stdio.h>


int main () {
	int placa;
	printf ("Digite o ultimo numero de sua placa: ");
	scanf ("%d", &placa);
		if (placa == 0 || placa == 1) {
		printf ("Seu rodizio eh na segunda-feira.");
	}
		if (placa == 2 || placa == 3) {
		printf ("Seu rodizio eh na terca-feira.");
	}
		if (placa == 4 || placa == 5) {
		printf ("Seu rodizio eh na quarta-feira.");
	}
		if (placa == 6 || placa == 7) {
		printf ("Seu rodizio eh na quinta-feira.");
	}
		if (placa == 8 || placa == 9) {
		printf ("Seu rodizio eh na sexta-feira.");
	}
	return 0;
}
