#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //declaração das variáveis
    int x[10], temp;

    //sortear numeros
    srand(time(NULL));
    for(int i = 0; i < 10; i++)
    {
        x[i]=rand()%16;
    }

    //Organizar os números em ordem decrescente
    for (int j = 0; j < 10; j++)
    {
        for(int i = 0; i < 9; i++)
        {
            if(x[i] < x[i+1])
            {
                temp = x[i];
                x[i] = x[i+1];
                x[i+1] = temp;
            }
        }
    }

    for(int i = 0; i < 10; i++)
    {
        printf("%d ",x[i]);
    }
    
    return 0;
}