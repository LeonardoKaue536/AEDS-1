#include <stdio.h>
#include <stdlib.h>

//Porcetimento da tabuada
void tabuada(int n1){
    for(int i = 1; i <= n1; i++){

        for(int j = 1; j <= i; j++){
            printf("%d\n", i*j);
        }
        
    }
}


int main()
{
    //declaração das variáveis
    float num;

    //receber de um a nove
    printf("um valor de 1 a 9:\n");
    scanf("%f", &num);
    
    //chamada do procedimento
    tabuada(num);
    return 0;
}
