#include <stdio.h>
#include <math.h>
#define PI 3.1415

int main(){
    //Declaração das variáveis
    double raio, peri, area;

    //Receber o valor do raio
    scanf("%lf", &raio);

    //Cálculo do perimetro e da areaa
    peri = PI * 2 * raio;
    area =  PI * (raio * raio);

    //Mostra o resultado na tela
    printf("%.2lf\n", peri);
    printf("%.2lf\n", area);




    return 0;
}