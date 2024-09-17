#include <stdio.h>
#include <stdbool.h>

bool negaposi(int i){
    //declaração das variáveis
    bool teste;

    //verifica se o número é positivo ou negativo
    if(i > 0){
        teste = true;
    }else{
        teste = false;
    }

    //retorna o valor de teste
    return teste;
}

int main(){
    //Declaração das variáveis
    int i, n;

    //receber quantos números
    printf("Digite quantos números");
    scanf("%d", &n);

    for(int a = 0; a < n; a++){
        //Receber um número
        printf("Digite um número:\n");
        scanf("%d", &i);

        //verifica se é negativo ou positivo
        if(negaposi(i) == true){
            printf("Sim\n");
        }else{
            printf("Nao\n");
        }
    }
    return 0;
}