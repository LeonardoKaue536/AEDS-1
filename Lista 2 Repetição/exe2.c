#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração das variáveis
    int n, num, positivos = 0, negativos = 0, zeros = 0, percp,percn,percz;
    

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
    //calculo da porcentagem
    percp = positivos*100/ n;
    percn = negativos*100/n;
    percz = zeros*100/n;

    //Mostra o resultado
    printf("%d%% POSITIVOS\n", percp);
    printf("%d%% NEGATIVOS\n", percn);
    printf("%d%% ZEROS", percz);
    
    return 0;
}
