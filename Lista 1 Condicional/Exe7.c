#include <stdio.h>

int main()
{
    //declaração das variáveis
    char tipo;
    float dinheiro, investido;

    //Receber o valor investido
    scanf("%f", &dinheiro);

    //Recerber o tipo
    scanf(" %c", &tipo);

    //descobrir o tipo
    if(tipo == 'P'){
        investido = dinheiro + (dinheiro * 0.03);
        printf("%.2f", investido);
    }else if(tipo == 'F'){
        investido = dinheiro + (dinheiro * 0.04);
        printf("%.2f", investido);
    }
    return 0;
}