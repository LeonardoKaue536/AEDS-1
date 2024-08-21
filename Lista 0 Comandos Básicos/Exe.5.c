#include <stdio.h>
#include <math.h>

int main(){
    //Declaração das variáveis
    float cat1, cat2, hip;

    //Receber os dois catetos
    scanf("%f %f", &cat1, &cat2);

    //Cálculo da hipotenusa
    hip = sqrt((cat1*cat1)+(cat2*cat2));

    //Mostra o resultado na tela
    printf("%.2f\n", hip);
    




    return 0;
}