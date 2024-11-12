#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int main()
{
    //declaração das variáveis
    int idade;
    char sexo, nome[20];
    
    //receber os requisitos
    printf("digite seu nome:\n");
    scanf(" %s", &nome);
    printf("digite seu sexo(F-feminino M-Masculino):\n");
    scanf(" %c", &sexo);
    printf("digite seu idade:\n");
    scanf("%d", &idade);

    //Imprimir na tela
    if((sexo == 'F' || sexo == 'f')&&(idade < 25))
    {
        printf("ACEITA\n%s", nome);
    }else{
        printf("NAO ACEITA");
    }
    return 0;
}