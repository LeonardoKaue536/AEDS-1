#include <stdio.h>

int main()
{
    //declaração das variáveis
    FILE *arq = fopen("exe8.txt","w");
    int x, terco, decimo, manu;
    float aluguel , anual, mes, tencao;

    //receber quantidade de veiculos e valor por aluguel
    printf("Digite a quantidade de carros:\n");
    scanf("%d", &x);

    printf("Digite o valor por aluguel:\n");
    scanf("%f", &aluguel);

    //calculo faturamento anual 1/3
    terco = x/3;
    anual = (terco*aluguel) *12;
    printf("Faturamento anual: %.2f\n", anual);
    fprintf(arq, "%.2f\n", anual);
    
    //calculo atraso
    decimo = terco/10;
    mes = (decimo*aluguel*0.2);
    printf("Faturamento no mes: %.2f\n", mes);
    fprintf(arq, "%.2f\n", mes);

    //Manutenção
    manu = x * 0.02;
    tencao = manu *600;
    printf("Manutencao: %.2f", tencao);
    fprintf(arq, "%.2f\n", tencao);

    fclose(arq);



    return 0;
}