#include <stdio.h>
#include <stdlib.h>

int main()
{
    double comprimento, largura, area;

    printf("Quais sao as dimensoes do terreno?\n");
    printf("Digite o comprimento em metros: \n");
    scanf("%lf", &comprimento);
    printf("Digite a largura em metros: \n");
    scanf("%lf", &largura);

    area = comprimento * largura;

    printf("A dimensao do terreno e de %0.2lf metros", area);
    return 0;
}
