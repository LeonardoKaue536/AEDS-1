#include <stdio.h>

int main()
{
    //declaração das variáveis
    float sal, novosal;
    
    //Receber o salário do funcionário
    scanf("%f", &sal);

    //Verificar se pode receber o salário
    if(sal < 500){
        novosal = sal + (sal * 0.3);
        printf("%.2f", novosal);
    }else{
        printf("Sem reajuste");
    }
    return 0;
}