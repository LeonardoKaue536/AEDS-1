#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int main()
{
    //declaração das vaiáveis
    char texto[50];
    int i = 0, conte = 0;

    //receber a string
    printf("Digite um texto:\n");
    scanf("%[^\n]", texto);


    printf("A string eh: %s\n", texto);

    while(i < 50){
        
        if(texto[i] == '\0'){
            i = 50;
        }else{
            conte++;
            i++;
        }

    }

    printf("O comprimento eh de %d\n", conte);


    return 0;
}