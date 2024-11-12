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

    //imprimir as 4 primeiras letras do nome
    printf("4 primeiras letras do nome:\n");
    for(int  i = 0; i < 4; i++)
    {
        printf("%c", string[i]);
    }
}