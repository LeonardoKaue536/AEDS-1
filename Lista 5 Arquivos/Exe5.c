#include <stdio.h>

int main()
{
    //declaração das variáveis
    FILE *arq1, *arq2, *arq3;
    char linha[100];

    //abrindo os aquivos 1 e 2 para leitura
    arq1 = fopen("5text1.txt", "r");
    arq2 = fopen("5text2.txt", "r");

    //abrindo o arquivo 3 para escrita subsequente
    arq3 = fopen("5text3.txt", "a");

    //escrevendo os textos dos arquivos 1 e 2 no arq 3
    while(fgets(linha, sizeof(linha), arq1) != NULL)
    {
        fprintf(arq3, "%s", linha);
    } 
    //separar os textos
    fprintf(arq3,"\n");
    while(fgets(linha, sizeof(linha), arq2) != NULL)
    {
        fprintf(arq3, "%s", linha);
    }

    fclose(arq1);
    fclose(arq2);
    fclose(arq3);

    //Mostrando o resultado na tela
    arq3 = fopen("5text3.txt", "r");

    while(fgets(linha, sizeof(linha), arq1) != NULL)
    {
        printf("%s", linha);
    } 
    


    return 0;
}