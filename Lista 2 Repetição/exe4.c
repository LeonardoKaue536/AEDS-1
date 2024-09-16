#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração das variáveis
    int n;
    float e = 1, fatorial;

    //receber o valor de n
    scanf("%d", &n);
    
    //Repetição de  n vezes
    for(int i = 1; i < n; i++){
        fatorial = 1;
        for(int j = 1; j <= i; j++){
                fatorial *= j;
        }
        e = e + 1/fatorial;
    }
    //Mostra o valor de n
    printf("%.2f", e);
    
    
    return 0;
}