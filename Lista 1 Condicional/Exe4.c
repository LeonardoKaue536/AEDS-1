#include <stdio.h>

int main()
{
    //declaração das variáveis
    int idade;

    //Receber sua idade
    scanf("%d", &idade);

    //Descobrir qual sua categoria
    if(idade <= 7){
        printf("Infantil");
    }else if(idade <= 10){
        printf("Juvenil");
    }else if(idade <= 15){
        printf("Adolescente");
    }else if(idade <= 30){
        printf("Adulto");
    }else{
        printf("Senior");
    }
    return 0;
}