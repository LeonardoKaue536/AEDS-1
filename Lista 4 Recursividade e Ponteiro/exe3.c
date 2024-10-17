#include <stdio.h>
int divisao(int num, int den){
    //declaração das variáveis
    int total;

    if(num < den){
        return total = 0;
    }else{
        total = divisao(num - den, den);
        total +=1;
    }

    

    return total;
}

int main(){
    //declaração das variáveis
    int num, den;

    //receber o numerador e denominador
    //printf("Digite o numerador e denominador de uma divisao:\n");
    scanf("%d %d", &num, &den);

    //Mostrar o resultado na tela
    printf("%d",divisao(num, den));


    return 0;
}