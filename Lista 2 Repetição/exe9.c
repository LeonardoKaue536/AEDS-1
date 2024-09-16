#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração das variáveis
    float preco = 1, venda = 1, lucro, perc, compratotal = 0, vendatotal = 0, 
    lucrototal = 0;
    int menor10 = 0, menor20 = 0, maior20 = 0;
    //Repetição até ser digitado um 0
    while( preco > 0){
        //receber o preço e valor de venda
        scanf("%f %f", &preco, &venda);

        if( preco != 0){
        //calculo do lucro
        lucro = venda - preco;
        //porcentagem de de lucro
        perc = ((venda*100/preco)-100);

        //Qual categoria se encaixa
        if(perc < 10)menor10++;
        else if(perc <= 20)menor20++;
        else maior20++;

        //soma da compra total, da venda total e lucro total
        compratotal += preco;
        vendatotal += venda;
        lucrototal += lucro;
        }
    }

    //Mostrar as respostas na tela
    printf("%d\n", menor10);
    printf("%d\n", menor20);
    printf("%d\n", maior20);
    printf("%.2f\n", compratotal);
    printf("%.2f\n", vendatotal);
    printf("%.2f\n", lucrototal);


    return 0;
}  