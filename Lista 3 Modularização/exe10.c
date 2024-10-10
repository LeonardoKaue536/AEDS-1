#include <stdio.h>
void categoria(int n){
    //declaração das variáveis
    int idade;

    //recepetição para colocara as idades
    for(int i = 0; i < n; i++){
        //receber a idade
        printf("Digite sua idade:\n");
        scanf("%d", &idade);

        //Mostrar a categoria que pertence
        if(idade <= 7){
            printf("F\n");
        }else if(idade <= 10){
            printf("E\n");
        }else if(idade <= 13){
            printf("D\n");
        }else if(idade <= 15){
            printf("C\n");
        }else if(idade <= 17){
            printf("B\n");
        }else{
            printf("A\n");
        }
    }
}

int main(){
    //declaração das variáveis
    int n;

    //receber quantos nadadores
    printf("Digite quantos nadadores:\n");
    scanf("%d", &n);

    categoria(n);

    return 0;
}