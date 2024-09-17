#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração das variáveis
    int n;
    float e = 0;

    //receber o valor de n
    scanf("%d", &n);
    
    //Repetição de  n vezes
    for(int i = 1; i <= n; i++){
        e += (1/(float)i);
        printf("%.2f\n", e);
    }
    
    
    
    return 0;
}