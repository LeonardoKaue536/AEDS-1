#include <stdio.h>

int main(){
    
    //Declaração das variáveis
    double resposta , a, b;

    //Receber o numerador e o denominador
    scanf("%lf %lf", &a, &b);

    //Cálculo para transformar em fração
    resposta = a / b;
    
    //Mostra a resposta na tela
    printf("%.2lf", resposta);
    




    return 0;
}