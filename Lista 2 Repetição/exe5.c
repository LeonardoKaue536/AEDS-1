#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração das variáveis
    int filhos = 0, nfilho = 0, conte = 0, mediafilhos;
    float sal = 0, qsal = 0, maior, pessoas = 0, mediasal, perc;
    
    //Repetição até receber a entrada de um salário negativo
    while(sal >= 0 && filhos >= 0){
        //receber salário e quantidade de filhos
        scanf("%f %d", &sal, &filhos);
        //somar o salários
        if(sal >= 0 && filhos >= 0){
        qsal += sal;
        //Números de filhos
        nfilho += filhos;
        //maior salário
        if(sal > maior){
            maior = sal;
        }
        //pessoas com salário menor que 100
        if(sal <= 100){
            pessoas++;
        }
        //contar vezes repetido
        conte++;
        }
    }
    //media do salário
    mediasal = qsal / conte;

    //media de filhos
    mediafilhos = nfilho / conte;

    //porcentagem com salário abaixo de 100
    perc = pessoas  * 100/ conte;

    //mostrar o resultado na tela
    printf("%.2f\n", mediasal);
    printf("%d\n", mediafilhos);
    printf("%.2f\n", maior);
    printf("%.2f\n", perc);
    
    return 0;
}