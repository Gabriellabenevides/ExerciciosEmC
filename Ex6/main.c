#include <stdio.h>
#include <stdlib.h>

int main()
{
    int velocidademaxima, velocidade, multa;

    printf("Qual e a velocidade maxima da avenida? \n");
    scanf("%d", &velocidademaxima);
    printf("Qual velocidade voce estava dirigindo? \n");
    scanf("%d", &velocidade);

    if (velocidade <= velocidademaxima)
    {
        printf("Nao ha multa a pagar");
    }
    else
    {
        multa = 5 * (velocidade - velocidademaxima);
        printf("O valor da multa e de: R$%0.2d", multa);
    }

    return 0;
}
