#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração das variáveis
    int carc = 0;
    char caractere;

    FILE *arq1 = fopen("exe2.txt","r");

    while((caractere = fgetc(arq1)) != EOF){
        if(caractere == 'a' || caractere == 'A')
        {
            carc++;
        }

    }

    printf("%d caracteres a", carc);

    fclose(arq1);

    return 0;
}