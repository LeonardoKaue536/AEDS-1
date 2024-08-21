#include <stdio.h>

int main(){
    
    //Declaração das variáveis
    int hora,  minuto, resultado;

    //Receber as horas e os minutos
    scanf("%d %d", &hora, &minuto);

    //Cálculo
    resultado = (hora * 60) + minuto;

    //Mostra o resultado na tela
    printf("%d", resultado);





    return 0;
}