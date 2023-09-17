#include <stdio.h>
#include <stdlib.h>

int main()
{
    double m, cm, mm;

    printf("Transformando metros em centimetros e milimetros\n");
    printf("Digite um numero em metros: ");
    scanf("%lf", &m);

    cm = m * 100;
    mm = m * 1000;

    printf("\nO valor %0.2lf m em centimetros e %0.2lf cm e em milimetros e %.2lf mm", m, cm, mm);
}
