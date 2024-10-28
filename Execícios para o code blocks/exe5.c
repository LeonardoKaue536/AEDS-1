#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    //declaração das variáveis
    int x[10], y[10];

    //sortear números para os vetores X e Y
    srand(time(NULL));
    for(int i = 0; i < 10; i++) {
        x[i] = rand() % 16;
        y[i] = rand() % 16;
    }

    //mostrar os vetores gerados
    //Vetor X
    for(int i = 0; i < 10; i++) {
        printf("%d ", x[i]);
    }

    printf("\n---------------------------------------\n");

    //Vetor Y
    for(int i = 0; i < 10; i++) {
        printf("%d ", y[i]);
    }

    
    return 0;
}
