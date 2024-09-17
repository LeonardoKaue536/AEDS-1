#include <stdio.h>

int main()
{
    //declaração das variáveis
    int ano, idade;
    char niver;
    //receber o ano
    scanf("%d", &ano);
    //receber se fez ou não aniversário
    scanf(" %c", &niver);

    //Cálculo da valocidade
    idade = 2024 - ano;
    //Casos se fizer aniversário
    if(niver == 'N'){
        idade -= 1;
    }
    //Mostrar a idade
    printf("%d\n", idade);
    //mostrar se pode dirigir
    if(idade < 18){
        printf("Não pode dirigir");
    }else{
        printf("Pode dirigir");
    }
    return 0;
}