#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Declaração das variáveis
    int vet[8], i, j, z, num;

    //Repetição para ordenar a medida que é colocado dos valores no vetor

    srand(time(NULL));
    for(i = 1; i <= 8; i++)
    {
        
        //receber o numero
        num = rand() % 51;

        //Verifica o numero anterior é menor
        j = 1;
        while(j < i && vet[j-1] < num)
        {
            j++;
        }

        //Passar o valores maiores para a direita
        z = i;
        while (z > j)
        {
            vet[z-1] = vet[z-2];
            z--;
        }

        //Coloca o valor na posição correta
        vet[j-1] = num;
        
    }
    

    //mostrar o vetor já ordenado
    for(int u = 0; u < 8; u++)
    {
        printf("%d ", vet[u]);
    }
    return 0;
}