/* Excercicio de ascii, octal e hexadecimal*/
#include <stdio.h>
int main ( ) {
	char carac;
	printf ("Representando em ASCII, OCTAL e HEXADECIMAL \n");
	printf ("Digite um caractere:  \n");
	scanf ("%c", &carac);
	printf ("ASCII: %d \nOctal: %o \nHexadecimal: %x \n", carac, carac, carac);
	return 0;
}
