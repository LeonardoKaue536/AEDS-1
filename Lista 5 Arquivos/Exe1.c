#include <stdio.h>
#include <stdlib.h>
int main()
{
    //declaração de variáveis
    int num;

    FILE *arq1 = fopen("arq.txt","w");

    printf("Digite os valores para serem gravados:\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &num);
        fprintf(arq1,"%d\n",num);

    }

    fclose(arq1);

    return 0;
}