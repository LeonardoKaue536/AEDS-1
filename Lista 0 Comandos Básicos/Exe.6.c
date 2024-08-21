#include <stdio.h>

int main(){
    
    //Declaração das variáveis
    int razao, ptermo, decimo;

    //Receber a razão e o primeiro termo
    scanf("%d %d", &razao, &ptermo);

    //Cálculo do decimo termo da P.A
    decimo = ptermo + 9 * razao;

    //Mostra o resultado na tela
    printf("%d", decimo);




    return 0;
}