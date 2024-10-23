/*Calcula e informa conceito final*/

#include <stdio.h>

int main() {
	int faltas, media;
	char conceito;
	
	printf ("Digite a quantidade de faltas: ");
	scanf ("%d", &faltas);
	
	if (faltas > 5) {
		conceito = 'F';
    } else {
    	printf("Digite a media: ");
		scanf ("%d", &media);
		
        if (media >= 9) {
            conceito = 'E';
        } else if (media >= 7.5) {
            conceito = 'A';
        } else if (media >= 6) {
            conceito = 'B';
        } else {
            conceito = 'C';
        }
	}
	printf("Conceito: %c", conceito);
	
	return 0;
}
