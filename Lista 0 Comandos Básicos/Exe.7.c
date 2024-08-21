#include <stdio.h>
#include <math.h>

int main(){
    
    //Declaração das variáveis
    int razao, ptermo, quinto;

    //Receber a razão e o primeiro termo
    scanf("%d %d", &razao, &ptermo);

    //Cálculo do decimo termo da P.A
    quinto = ptermo * (pow(razao, 4));

    //Mostra o resultado na tela
    printf("%d", quinto);




    return 0;
}