#include <stdio.h>

int main()
{
    //declaração das variáveis
    double a, b, c, d, media;

    //Receber notas
    scanf("%lf %lf %lf %lf", &a, &b , &c, &d);

    //Cálculo da média
    media = (a+b+c+d) / 4;
    printf("%.2lf\n", media);

    //Mostrar se foi aprovado
    if(media < 7){
        printf("Reprovado\n");
    }else{
        printf("Aprovado\n");
    }

    return 0;
}