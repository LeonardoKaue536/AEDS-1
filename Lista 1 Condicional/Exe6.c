#include <stdio.h>

int main()
{
    //declaração das variáveis
    float a , b, resul;

    //receber o valores dos coeficientes
    scanf("%f %f", &a, &b);

    //Cálculo da equação
    resul = -b / a;

    //mostrar o resultado
    printf("%.2f", resul);
    return 0;
}