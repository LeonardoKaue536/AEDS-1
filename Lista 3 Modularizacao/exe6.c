#include <stdio.h>
//Somatório
float somatorio(int n){
    //declaração das variáveis
    float total = 0, fat;

    for(int i = 1; i <= n; i++){
        fat = 1;
        for(int j = 1; j < i; j++){
            fat *= j; 
        }
        total += 1/fat;
    }

    return total;
}


int main(){
    //Declaração das váriaveis
    int n;

    //receber o valor de n
    printf("Digite um valor de n:\n");
    scanf("%d", &n);

    //Mostrar o resultado do somatório
    printf("%f", somatorio(n));

    return 0;
}