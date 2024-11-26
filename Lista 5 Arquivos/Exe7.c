#include <stdio.h>

int main()
{
    //declaração das variáveis
    FILE *arq1;
    int quant,cont = 0;
    char letra, vogal;

    arq1 = fopen("exe7.txt","w");

    //receber quantas letras
    printf("Quantidade de letras:\n");
    scanf("%d", &quant);

    //Escrever letras no arquivo
    printf("Digite as letras:\n");
    for(int i = 0; i < quant; i++)
    { 
        scanf(" %c", &letra);
        fprintf(arq1,"%c\n",letra);
    }

    fclose(arq1);

    //verificar a quantidade de vogais
    arq1 = fopen("exe7.txt", "r");
    while((vogal = fgetc(arq1)) != EOF)
    {
        if(((vogal == 'a' || vogal == 'e') || (vogal == 'i' || vogal == 'o')) || vogal == 'u')
        {
            cont++;
        }
    }
    //Mostra a quatidade de vogais no arquivo
    printf("Tem %d vogais\n", cont);

    fclose(arq1);

    return 0;
}