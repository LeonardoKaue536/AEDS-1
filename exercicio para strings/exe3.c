#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int main()
{
    //declaração das variáveis
    char string[20];

    //receber o nome
    printf("Digite seu primeiro nome:\n");
    scanf(" %[^\n]", &string);

    //verificar se a primeira letra é A/a
    if(string[0] == 'a'|| string[0] == 'A')
    {
        printf("Seu nome eh: %s\n", string);
    }else{
        printf("Seu nome nao comeca com a/A\n");
    }

    return 0;
}