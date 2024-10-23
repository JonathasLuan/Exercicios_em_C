#include <stdio.h>

void rodizio(int placa)
{
    switch (placa)
    {
        case (1):
            printf("\nRodizio: Segunda-feira.");
            break;
        case (2):
            printf("\nRodizio: Segunda-feira.");
            break;
        case (3):
            printf("\nRodizio: Terca-feira.");
            break;
        case (4):
            printf("\nRodizio: Terca-feira.");
            break;
        case (5):
            printf("\nRodizio: Quarta-feira.");
            break;
        case (6):
            printf("\nRodizio: Quarta-feira.");
            break;
        case (7):
            printf("\nRodizio Quinta-feira.");
            break;
        case (8):
            printf("\nRodizio: Quinta-feira.");
            break;
        case (9):
            printf("\nRodizio: Sexta-feira");
            break;
        case (0):
            printf("\nRodizio: Sexta-feira");
            break;
        default:
            printf("numero invalido");
    }
}

int main()
{
    int last_digit = -1;
    while (last_digit < 0 || last_digit > 9)
    {
        printf("Insira o ultimo digito da sua placa\n");
        scanf("%d", &last_digit);
    } 
    rodizio(last_digit);
}
