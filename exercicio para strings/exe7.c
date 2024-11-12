#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // declaração das variáveis
    char texto1[20], texto2[20];
    int i = 0, conte1 = 0, conte2 = 0, diferente = 0;

    // receber os textos
    printf("Digite uma palavra pro texto 1:\n");
    scanf(" %s", &texto1);
    printf("Digite uma palavra pro texto 2:\n");
    scanf(" %s", &texto2);

    // verificar o texto maior
    while (i < 20)
    {
        if (texto1[i] == '\0')
        {
            i = 20;
        }
        else
        {
            conte1++;
            i++;
        }
    }

    while (i < 20)
    {
        if (texto2[i] == '\0')
        {
            i = 20;
        }
        else
        {
            conte2++;
            i++;
        }
    }

    if (conte1 > conte2 || conte2 < conte1)
    {
        printf("textos são diferentes\n");
    }
    else
    {

        // verificar se as string são iguais
        while (i < 20)
        {
            if(texto1[i] != '\0')
            {

                if (texto1[i] == texto2[i])
                {
                    i++;
                }
                else
                {
                    printf("Texto diferente\n");
                    diferente = 1;
                    i = 20;
                }
            }
            else
            {
                i = 20;
            }
        }
    }

    if(diferente == 0)
    {
        printf("Textos são iguais\n");
    }
    return 0;
}