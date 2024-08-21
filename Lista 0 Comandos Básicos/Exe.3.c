#include <stdio.h>
#include <math.h>

int main(){
    //Declaração das variáveis
    float base, altura, peri, area, diago;

    //Receber os valores para a base e a altura
    scanf("%f %f", &base, &altura);
    
    //Cálculos do perímetro, área e diagonal
    peri = base + base + altura + altura;
    area = base * altura;
    diago = sqrt((base * base)+(altura * altura));

    //Mostra o resultado na tela
    printf("%.2f\n", peri);
    printf("%.2f\n", area);
    printf("%.2f", diago);
    




    return 0;
}