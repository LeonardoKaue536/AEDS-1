#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //declaração das variáveis
    int vet[8], temp;

    //zerar o vetor
    for(int i = 0; i < 9; i++)
    {
        vet[i] = 0;
    }

    //adicionar os números e ja colocalos em ordem crescente
    srand(time(NULL));

    for (int j = 8; j > 0; j--)
    {
        vet[j]= rand()%16;

        for(int i = 8; i < 1; i--)
        {
            if(vet[i] < vet[i-1])
            {
                temp = vet[i];
                vet[i] = vet[i-1];
                vet[i-1] = temp;
            }
        }
    }

    //mostrar o vetor
    for(int i = 0; i < 8; i++)
    {
        printf("%d ", vet[i]);
    }
    return 0;
}