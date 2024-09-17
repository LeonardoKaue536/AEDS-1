#include <stdio.h>

int main()
{
    //declaração das variáveis
    double altura, peso;
    char gene;

    //receber a altura
    scanf("%lf", &altura);

    //receber o gênero
    scanf(" %c", &gene);

    //Verificar se é homem ou mulher
    if(gene == 'H' || gene == 'h'){
        peso = (72.7 * altura) - 58;
    }else if(gene == 'M' || gene == 'm'){
        peso = (62.1 * altura) - 44.7;
    }

    //mostrar o resultado na tela
    printf("%.2lf", peso);
    return 0;
}