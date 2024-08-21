#include <stdio.h>

int main(){

    //Declaração das variáveis   
    float salminimo, pwatts, vpago, desconto; 
    int kwatts;
    
    //Pedir o salminimo e a quantidade de watts
    scanf("%f", &salminimo);
    scanf("%d", &kwatts);

    //Cálculos
    pwatts = (salminimo * 1/7) / 100;
    vpago = kwatts * pwatts;
    desconto = vpago - (vpago * 10/100);

    //Mostra o resultado na tela
    printf("%.2f\n%.2f\n%.2f", pwatts, vpago, desconto);
    




    return 0;
}