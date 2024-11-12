#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //declaração das variáveis
    char texto[10];
    printf("Digite uma frase:\n");
    scanf(" %[^\n]", texto);

    printf("O a frase digitada eh: %s\n", texto);

    return 0;
}