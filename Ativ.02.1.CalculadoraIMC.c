/*Prog1.C*/
#include <stdio.h>
int main ( ) {
    float peso, altura, imc;
    printf ("Digite seu peso: ");
    scanf ("%f", &peso);
    
    printf ("Digite sua altura: ");
    scanf ("%f", &altura);
    
    imc = peso / (altura * altura);
    printf ("Seu IMC: %2.f", imc);
    return 0;
}
