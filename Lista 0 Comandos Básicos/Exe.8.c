#include <stdio.h>

int main(){
    
    //Declaração das variáveis
    float a ,b ,c;

    //Receber os valores de a e b
    scanf("%f %f", &a, &b);

    //Trocar os valores
    c = a;
    a = b;
    b = c;

    //Mostra na tela o resultado
    printf("%.2f %.2f", a, b);



    return 0;
}