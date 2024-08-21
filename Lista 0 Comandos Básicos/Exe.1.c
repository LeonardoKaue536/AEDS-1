#include <stdio.h>

int main(){
    //declaração das variáveis
    int num1, unidade, dezena, centena, num2;

    //Receber o número
    scanf("%d", &num1);

    //Cálculo para inverter
    unidade = num1/100;
    dezena = (((num1 % 100) / 10) * 10);
    centena = (((num1 % 100) % 10) * 100);
    num2 = unidade + centena + dezena;

    //Mostra o resultado
    printf("%d", num2);





    return 0;
}