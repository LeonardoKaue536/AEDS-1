#include <stdio.h>

//calcula media dos aprovados
float mediaalunos(int n){
    //declaração das variáveis
    float media, total = 0;
    int conte = 0;

    //repetição para ler as notas
    for(int i = 0; i < n; i++){
        //receber a média
        //printf("Digite a sua média\n");
        scanf("%f", &media);

        if(media >= 6){
            conte++;
            total += media;
        }
    }

    total /= conte;


    return total;
}

int main(){
    //declaração das variáveis
    int n;

    //receber quantos alunos
    //printf("Digite a quantidade de alunos:\n");
    scanf("%d", &n);

    //Mostrar o resultado
    printf("%.1f\n", mediaalunos(n));


    return 0;
}