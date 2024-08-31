#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração das variáveis
    int horasex, horas, total;

    //Receber as horas
    printf("Digite as horas faltadas:\n");
    scanf("%d", &horas);

    //Receber as horas extras trabalhadas
    printf("Digite as horas extras:\n");
    scanf("%d", &horasex);

    //Cálculo do total das horas e depois tranformadas em minutos
    total = 60 * (horasex-(horas * 2 / 3));

    //Verificar qual o prêmio
    if(total < 600){
        printf("Seu premio eh de R$100");
    }else if(total < 1200){
        printf("Seu premio eh de R$200");
    }else if(total < 1800){
        printf("Seu premio eh de R$300");
    }else if(total < 2400){
        printf("Seu premio eh de R$400");
    }else{
        printf("Seu premio eh de R$500");
    }
}