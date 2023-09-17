#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario, salarioReajustado;

    printf("**Reajuste de salario**\n");
    printf("Digite seu salario: ");
    scanf("%lf", &salario);

    if (salario <= 300)
    {
        salarioReajustado = salario + (salario * 0.5);
        printf("O salario reajustado e: R$%0.2lf", salarioReajustado);
    }
    else
    {
        salarioReajustado = salario + (salario * 0.3);
        printf("O salario reajustado e: R$%0.2lf", salarioReajustado);
    }
    return 0;
}
