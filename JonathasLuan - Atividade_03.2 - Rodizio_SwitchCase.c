/*
Retorna dia de rodizio com switch case

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
	switch (placa) {
		case 0 :
		printf ("Seu rodizio eh na segunda-feira.");
		break;
		
		case 1 :
		printf ("Seu rodizio eh na segunda-feira.");
		break;
		
		case 2 :
		printf ("Seu rodizio eh na terca-feira.");
		break;
		
		case 3 :
		printf ("Seu rodizio eh na terca-feira.");
		break;
		
		case 4 :
		printf ("Seu rodizio eh na quarta-feira.");
		break;
		
		case 5 :
		printf ("Seu rodizio eh na quarta-feira.");
		break;
		
		case 6 :
		printf ("Seu rodizio eh na quinta-feira.");
		break;
		
		case 7 :
		printf ("Seu rodizio eh na quinta-feira.");
		break;
		
		case 8 :
		printf ("Seu rodizio eh na sexta-feira.");
		break;
		
		case 9 :
		printf ("Seu rodizio eh na sexta-feira.");
		break;
		
		default :
		printf ("Valor invalido.");
	}
	return 0;
}
