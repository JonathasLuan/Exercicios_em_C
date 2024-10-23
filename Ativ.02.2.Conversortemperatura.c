/*Calcula Temperatura*/
#include <stdio.h>

int main()
{
    float fahren, celsius;
    printf("Digite uma temperatura em Fahrenheit: \n");
    scanf("%f", &fahren);
    celsius = (fahren - 32) * 5.0/9;
    printf("Celsius: %.2f\n", celsius);
    return 0;
}
