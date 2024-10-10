#include <stdio.h>
#include <math.h>

//calculo do denominador
double deno(int i)
{
    double den = 0;

    den += (i+3);

    return den;
}

//calculo do numerador
double nume(int i)
{
    //declaração das variáveis
    double num = 0;

    num = ((pow(i,2))+1);

    return num;
}

//pegar o calculo total
double calcular(int n)
{
    double s = 0, numerador, denominador;

    for(int i = 1; i <= n; i++){
        numerador = nume(i);
        denominador = deno(i);

        s += numerador / denominador;
    }

    return s;
}

int main(void)
{
    //Declaração das variáveis
    int n;

    //digite o valor de n
    scanf("%d", &n);

    //printar resultado
    printf("%lf", calcular(n));
}