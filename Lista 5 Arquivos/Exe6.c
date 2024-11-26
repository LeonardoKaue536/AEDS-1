#include <stdio.h>

int main()
{
    //declaração das variáveis
    FILE *arq1;
    int num, total = 0;

    //abrir o arquivo
    arq1 = fopen("exe6.txt", "w");
    //pedir o valor
    printf("digite um valor para num:\n");
    scanf("%d", &num);

    //cálculo para calcular os divisores de um números
    printf("Os divisores de %d:\n", num);
    for(int i = 1; i <= num; i++)
    {
        if(num % i == 0){
            printf("%d\n", i);
            total += i;
        }
    }

    //escrever valor no arquivo
    fprintf(arq1,"%d", total);

    fclose(arq1);

    return 0;
}