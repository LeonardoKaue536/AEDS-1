#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração das variáveis
    int divi39 = 0, divi2 = 0, divi5 = 0;
    float num;
    //Repetição de 10vezes
    for(int i = 0; i < 10; i++){
        //Receber o número
        scanf("%f", &num);

        //Contar positivos negativos zeros
        if((int)num % 9 == 0 && (int)num % 3 == 0)divi39++;
        else if((int)num % 2 == 0)divi2++;
        else if((int)num % 5 == 0)divi5++;
        else printf("Número não é divisível pelos valores\n");
    }

    //Mostra o resultado
    printf("%d Números são divisíveis por 3 e por 9\n", divi39);
    printf("%d Números são divisíveis por 2\n", divi2);
    printf("%d Números são divisíveis por 5\n", divi5);
    
    return 0;
}
