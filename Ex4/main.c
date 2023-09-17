#include <stdio.h>
#include <stdlib.h>

int main()
{
    double totalgasto, resultado;
    int opcao;

    printf("Qual foi o total gasto? ");
    scanf("%lf", &totalgasto);
    printf("\nOpcao 1: a vista com 10 por cento de desconto.\n");
    printf("Opcao 2: em duas vezes (preco da etiqueta)\n");
    printf("Opcao 3: de 3 ate 10 vezes com 3 por cento de juros ao mes (somente para compras acima de R$100,00)\n");
    printf("\nQual a opcao de pagamento desejada?\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        resultado = totalgasto - (totalgasto * 0.10);
        printf("O total a pagar e: %0.2lf", resultado);
        break;
        case 2:
        resultado = totalgasto / 2;
        printf("O valor das duas parcelas serao de: %0.2lf", resultado);
        break;
        case 3:
            if (totalgasto >= 100)
            {
                printf("Parcelas de 3 ate 10 vezes, com 3 por cento de juros ao mes\n\n");

                resultado = totalgasto + (totalgasto * 0.03);
                printf("O valor da terceira parcela: R$%0.2lf \n", resultado);

                resultado = totalgasto + (totalgasto * 0.06);
                printf("O valor da quarta parcela: R$%0.2lf \n", resultado);

                resultado = totalgasto + (totalgasto * 0.09);
                printf("O valor da quinta parcela: R$%0.2lf \n", resultado);

                resultado = totalgasto + (totalgasto * 0.12);
                printf("O valor da sexta parcela: R$%0.2lf \n", resultado);

                resultado = totalgasto + (totalgasto * 0.15);
                printf("O valor da setima parcela: R$%0.2lf \n", resultado);

                resultado = totalgasto + (totalgasto * 0.18);
                printf("O valor da oitava parcela: R$%0.2lf \n", resultado);

                resultado = totalgasto + (totalgasto * 0.21);
                printf("O valor da nona parcela: R$%0.2lf \n", resultado);

                resultado = totalgasto + (totalgasto * 0.24);
                printf("O valor da decima parcela: R$%0.2lf \n", resultado);
            }
            else
            {
                printf("Parcelamento permitido somente para Total Gasto a cima de R$100,00\n\n");
            }
            break;

        default:
            printf("Operador invalido!");
            break;
    }


    return 0;
}
