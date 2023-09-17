#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l;
    double tamanho, area;

    printf("Digite o numero de lados: \n");
    scanf("%d", &l);
    printf("Digite o tamanho dos lados: \n");
    scanf("%lf", &tamanho);

    switch (l)
    {
    case 3:
        area = l * l * 1.73 / 4;
        printf("O valor da area do triangulo e: %0.2lf", area);
        break;
    case 4:
        area = l * l;
        printf("O valor da area do quadrado e: %0.2lf", area);
        break;
    case 6:
        area = 6 * l * l * 1.73/4;
        printf("O valor da area do hexagono e: %0.2lf", area);
        break;
    default:
        printf("Nao sei calcular a area");
        break;
    }
    return 0;
}
