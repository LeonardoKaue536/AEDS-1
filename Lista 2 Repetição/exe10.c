#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração das variáveis
    int can1 = 0, can2 = 0, can3 = 0, can4 = 0, nulo = 0, branco = 0, voto;

    //receber o voto
    scanf("%d", &voto);
    
    //Repetição até ser digitado um 0
    while( voto > 0){
        
        

        if( voto != 0){
            //calculo voto para cada candidato
            if(voto == 1)can1++;
            else if(voto == 2)can2++;
            else if(voto == 3)can3++;
            else if(voto == 4)can4++;
            else if(voto == 5)nulo++;
            else if(voto == 6)branco++;

        }
        //receber o preço e valor de venda
        scanf("%d", &voto);
    }

    //Mostrar as respostas na tela
    printf("%d\n", can1);
    printf("%d\n", can2);
    printf("%d\n", can3);
    printf("%d\n", can4);
    printf("%d\n", nulo);
    printf("%d\n", branco);


    return 0;
}  