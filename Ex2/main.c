#include <stdio.h>
#include <stdlib.h>

int main()
{
    double F, C;

    printf("Transformando Fahrenheit em Celsius\n");
    printf("Digite um valor em graus Fahrenheit: ");
    scanf("%lf", &F);

    C=(F-32.0) * (5.0/9.0);

    printf("O valor %0.1lf F corresponde a %0.1lf C", F, C);
    return 0;
}
