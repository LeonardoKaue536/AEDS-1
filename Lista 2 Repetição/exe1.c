#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração das variáveis
    int n, num, positivos = 0, negativos = 0, zeros = 0;

    //receber quantos números vão colocar
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        //Receber o número
        scanf("%d", &num);

        //Contar positivos negativos zeros
        if(num > 0)positivos++;
        else if(num < 0)negativos++;
        else if(num == 0)zeros++;
    }

    //Mostra o resultado
    printf("%d POSITIVOS\n", positivos);
    printf("%d NEGATIVOS\n", negativos);
    printf("%d ZEROS\n", zeros);
    
    return 0;
}
