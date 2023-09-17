#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horasSemanais, valorHora, salarioSemanal, bonus;

    printf("Qual foi o numero de horas trabalhadas na semana? \n");
    scanf("%d", &horasSemanais);
    printf("Qual e o seu valor hora? \n");
    scanf("%d", &valorHora);

    salarioSemanal = horasSemanais * valorHora;
    printf("O valor do salario com base nas horas trabalhadas sera de: %0.2d\n", salarioSemanal);

    if (horasSemanais <= 40)
    {
        printf("O salario semanal sera de: %0.2d e nao ha bonus", salarioSemanal);
    }
    else if ((horasSemanais > 40) && (horasSemanais <= 60))
    {
        bonus = salarioSemanal * 0.5;
        printf("Seu bonus sera de: R$%0.2d", bonus);
    }
    else if (horasSemanais > 60)
    {
        bonus = salarioSemanal * 2;
        printf("Seu bonus sera de: R$%0.2d\n", bonus);
    }
    printf("Seu salario semanal com o bonus sera de: R$%0.2d", salarioSemanal + bonus);

    return 0;
}
