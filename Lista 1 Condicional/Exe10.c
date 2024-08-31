#include <stdio.h>

int main()
{
    //Declaração das variáveis
    int horasex, horas, total;

    //Receber as horas
    scanf("%d", &horasex);

    //Receber as horas extras trabalhadas
    scanf("%d", &horas);

    //Cálculo do total das horas e depois tranformadas em minutos
    total = 60 * (horasex-(horas * 2 / 3));

    //Verificar qual o prêmio
    if(total < 600){
        printf("100.00");
    }else if(total < 1200){
        printf("200.00");
    }else if(total < 1800){
        printf("300.00");
    }else if(total < 2400){
        printf("400.00");
    }else{
        printf("500.00");
    }
}
