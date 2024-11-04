#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq;
    char carc;
    
    arq = fopen("arq.txt", "w");

    if(arq == NULL){
        printf("Erro ao tentar abri o arquivo\n");
        return 1;
    }

    printf("Digite caracteres (0 para finalizar):");

    while(carc != '0')
    {   
        scanf(" %c", &carc);
        if(carc != '0'){
            fputc(carc, arq);
        }
    }

    fclose(arq);

    printf("Dados adicionados ao arquivo\n");


    return 0;
}


