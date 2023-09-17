#include <stdio.h>
#include <stdlib.h>

int main()
{
    double valor1, valor2, resultado;
    char operador;
    printf("Digite o valor 1: ");
    scanf("%lf", &valor1);
    printf("Digite um operador: \n+\n-\n*\n/\n");
    scanf(" %c", &operador);
    printf("Digite o valor 2: ");
    scanf("%lf", &valor2);

    switch (operador)
    {
        case '+':
            resultado = valor1 + valor2;
            printf("O resultado da soma e: %0.2lf", resultado);
            break;
        case '-':
            resultado = valor1 - valor2;
            printf("O resultado da subtracao e: %0.2lf", resultado);
            break;
        case '*':
            resultado = valor1 * valor2;
            printf("O resultado da multiplicacao e: %0.2lf", resultado);
            break;
        case '/':
            resultado = valor1 / valor2;
            printf("O resultado da divisao e: %0.2lf", resultado);
            break;
        default:
            printf("Operador invalido!");
            break;
    }

    return 0;
}
