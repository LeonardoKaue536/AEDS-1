#include <stdio.h>

int main()
{
    //Declaração das variáveis
    char linha[100];
    int conte = 0;

    //abrir o arquivo
    FILE *arq = fopen("exe4.txt", "r");

    //mostrar conteúdo
    while(fgets(linha, sizeof(linha), arq) != NULL)
    {
        printf("%s", linha);
        conte++;
    }
    printf("\nO numero de linhas eh %d", conte);

    fclose(arq);
    return 0;
}